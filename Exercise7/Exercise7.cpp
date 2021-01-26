#include <iostream>
#include <Windows.h>
#include <string>
#include <typeinfo>
#include <string_view>
#include <vector>

using std::string; using std::cout; using std::cin; using std::getline; using std::endl;

//Напишите программу, которая:
//спрашивает у пользователя, сколько имен он хочет ввести;
//просит пользователя ввести каждое имя;
//вызывает функцию для сортировки имен в алфавитном порядке;
//выводит отсортированный список имен.

void sortArray(string *array, int length) //функция пузырьковой сортировки массива имен в алфавитном порядке
{
    int sorted{};
    for (int counter = 0; counter < length; counter++)
    {
        for (int counterS = 0; counterS < length - 1; counterS++)
        {
            if (array[counterS] > array[counterS + 1])
                std::swap(array[counterS], array[counterS + 1]);
        }
        sorted++;
    }
}

int main()
{
    setlocale(LC_ALL, "rus");

    cout << "How many names would you like to enter? ";
    int countOfNames;
    cin >> countOfNames;

    string *names = new string[countOfNames]; //выделение памяти под динамический массив

    for (int counter = 0; counter < countOfNames; counter++) //ввод имен в массив пользователем
    {      
        cout << "Enter name #" << counter + 1 << ": ";
        cin >> names[counter];
    }    

    sortArray(names, countOfNames); //вызов функции сортировки

    for (int counter = 0; counter < countOfNames; counter++) //вывод отсортированного массива
    {
        cout << "Name #" << counter + 1 << ": " << names[counter] << " \n";
        
    }

    delete[] names; //удаление выделенной памяти и присваивание неименованному указателю нулевого значения
    names = nullptr;
    return 0;
}