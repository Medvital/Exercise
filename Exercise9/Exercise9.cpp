#include <iostream>
#include <Windows.h>
#include <string>
#include <typeinfo>

using std::string; using std::cout; using std::cin; using std::getline; using std::endl;

//представьте, что вы пишете игру, в которой игрок может иметь 3 типа предметов : зелья здоровья, факелы и стрелы.
//создайте перечисление с этими типами предметов и фиксированный массив для хранения количества каждого типа предметов, 
//которое имеет при себе игрок(используйте стандартные фиксированные массивы, а не std::array).у вашего игрока должны быть 
//при себе 3 зелья здоровья, 6 факелов и 12 стрел.напишите функцию counttotalitems(), которая возвращает общее количество 
//предметов, которые есть у игрока.в функции main() выведите результат работы функции counttotalitems().

enum items { POTION, TORCH, ARROW } Items;

void countTotalItems(int x[])
{
    cout << x[0] + x[1] + x[2];
};

int main()
{
    setlocale(LC_ALL, "rus");

    int Items[3]{ 3, 6, 12 };
    
    countTotalItems(Items);
    

    return 0;
}