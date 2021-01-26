#include <iostream>
#include <Windows.h>
#include <string>
#include <typeinfo>

using std::string; using std::cout; using std::cin; using std::getline; using std::endl;

//Объявите фиксированный массив со следующими именами : Sasha, Ivan, John, Orlando, Leonardo, Nina, Anton и Molly.
//Попросите пользователя ввести имя.Используйте цикл foreach для проверки того, не находится ли имя, введенное пользователем, 
//уже в массиве.

int main()
{
    setlocale(LC_ALL, "rus");

    string names[8]{"Sasha", "Ivan", "John", "Orlando", "Leonardo", "Nina", "Anton", "Molly"};

    cout << "Enter a name: ";
    string nameForSearch;
    cin >> nameForSearch;
    int mask{};

    for (auto const& match : names)
    {
        if (nameForSearch == match)
        {
            cout << nameForSearch << " was found.";
            mask++;
            break;
        }
    }

    if (mask == 0)
        cout << nameForSearch << " was not found.";

    return 0;
}