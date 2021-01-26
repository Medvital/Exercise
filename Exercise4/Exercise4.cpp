#include <iostream>
#include <Windows.h>
#include <string>
#include <typeinfo>

using std::string; using std::cout; using std::cin; using std::getline; using std::endl;

//Создайте перечисление со следующими перечислителями : chicken, lion, giraffe, elephant, duck и snake.
//Объявите массив, где элементами будут эти перечислители и, используя список инициализаторов, 
//инициализируйте каждый элемент соответствующим количеством лап определенного животного.
//В функции main() выведите количество ног у слона, используя перечислитель.

enum Animals {
    chicken,
    lion,
    giraffe,
    elephant,
    duck,
    snake
} animals;

int main()
{
    setlocale(LC_ALL, "rus");

    int animal[6] = {Animals::chicken, Animals::lion, Animals::giraffe, Animals::elephant, Animals::duck, Animals::snake};
    animal[chicken] = 2;
    animal[lion] = 4;
    animal[giraffe] = 4;
    animal[elephant] = 4;
    animal[duck] = 2;
    animal[snake] = 0;


    cout << animal[chicken] << " " << animal[snake] << " " << animal[elephant];

    return 0;
}