#include <iostream>
#include <Windows.h>
#include <string>
#include <typeinfo>

using std::string; using std::cout; using std::cin; using std::getline; using std::endl;

//Напишите функцию calculate(), которая принимает две переменные типа int и одну переменную типа char, которая, в свою очередь, 
//представляет одну из следующих математических операций : +, -, *, / или % (остаток от числа).Используйте switch для выполнения 
//соответствующей математической операции над целыми числами, а результат возвращайте обратно в main().Если в функцию передается 
//недействительный математический оператор, то функция должна выводить ошибку.С оператором деления выполняйте целочисленное деление.

enum class Operations
{
    PLUS,
    MINUS,
    MULTIPLY,
    DIVISION
};

void calculate(int n1, int n2, Operations op)
{
    switch (op)
    {
    case Operations::PLUS:
        cout << n1 + n2;
        break;
    case Operations::MINUS:
        cout << n1 - n2;
        break;
    case Operations::MULTIPLY:
        cout << n1 * n2;
        break;
    case Operations::DIVISION:
        cout << n1 / n2;
        break;
    default:
        cout << "Unknown";
        break;
    }
}

int main()
{
    setlocale(LC_ALL, "rus");

    char operand;
    cout << "Choose 1 of 4 matematical operations: 1 is +, 2 is -, 3 is *, 4 is /. ";
    cin >> operand;
    int x, y;
    cin >> x;
    cin >> y;

    switch (operand)
    {
    case '+':
        calculate(x, y, Operations::PLUS);
        break;
    case '-':
        calculate(x, y, Operations::MINUS);
        break;
    case '*':
        calculate(x, y, Operations::MULTIPLY);
        break;
    case '/':
        calculate(x, y, Operations::DIVISION);
        break;
    }


    return 0;
}

//Just my short study exercises