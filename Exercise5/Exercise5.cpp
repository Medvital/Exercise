#include <iostream>
#include <Windows.h>
#include <string>
#include <typeinfo>

using std::string; using std::cout; using std::cin; using std::getline; using std::endl;

//Попросите пользователя ввести число от 1 до 9. Если пользователь введет что - либо другое — 
//попросите его снова ввести число и так до тех пор, пока он не введет корректное значение из 
//заданного диапазона.Как только пользователь введет число от 1 до 9, выведите массив на экран.
//Затем найдите в массиве элемент с числом, которое ввел пользователь, и выведите его индекс.

int main()
{
    setlocale(LC_ALL, "rus");

    cout << "Enter a value: ";
    int userNumber;
    cin >> userNumber;
    while (userNumber <= 0 || userNumber >= 10)
    {
        cout << "Type value from 1 to 9:" << endl;
        cin >> userNumber;
        if (std::cin.fail()) // если предыдущее извлечение оказалось неудачным,
        {
            std::cin.clear(); // то возвращаем cin в 'обычный' режим работы
            std::cin.ignore(32767, '\n'); // и удаляем значения предыдущего ввода из входного буфера
        }
    }

    int memory{};
    int numbers[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    for (int count = 0; count < 9; count++)
    {
        cout << numbers[count] << " ";
        if (userNumber == numbers[count])
            cout << endl << "Your number: " << numbers[count] << ". Your index of massive: " << count;

    }

    cout << endl << "Your number: " << numbers[memory] << ". Your index of massive: " << memory;
    return 0;
}