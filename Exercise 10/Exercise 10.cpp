#include <iostream>
#include <Windows.h>
#include <string>
#include <algorithm>
#include <vector>

using std::string; using std::cout; using std::cin; using std::getline; using std::endl;

//Создайте структуру, содержащую имя и оценку учащегося(по шкале от 0 до 100).Спросите у пользователя, сколько учеников он хочет ввести.Динамически 
//выделите массив для хранения всех студентов.Затем попросите пользователя ввести для каждого студента его имя и оценку.Как только пользователь ввел 
//все имена и оценки, отсортируйте список оценок студентов по убыванию(сначала самый высокий бал).Затем выведите все имена и оценки в отсортированном виде.

struct student 
{
    string name;
    int score;
};

bool sortName(const student &Student1, const student &Student2)
{
    return (Student1.score < Student2.score); 
}

int main()
{
    setlocale(LC_ALL, "rus");

    int countOfStudents;
    cout << "Enter the number of students: ";
    cin >> countOfStudents;

    std::vector<student> Student;
    Student.resize(countOfStudents);
    
    for (int i = 0; i < countOfStudents; i++)
    {
        cout << "Type " << i + 1 << " student's name and his score";
        cin >> Student[i].name;
        cin >> Student[i].score;
    }

    std::sort(Student.begin(), Student.end(), sortName ); 

    for (int i = 0; i < countOfStudents; i++) 
    {
        cout << Student[i].name << " " << Student[i].score << endl;
    }
    
    return 0;
}