#include <iostream>
#include <Windows.h>
#include <algorithm>

using std::string; using std::cout; using std::cin; using std::endl;

//Пузырьковая сортировка по возрастанию с оптимизацией 

int main()
{
    setlocale(LC_ALL, "rus");

    const int length(4);
    //int array[length] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
    //int array[length] = { 2, 1, 1, 1, 1 };
    //int array[length] = { 1, -1, 0, 0 };
    //int array[length] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, -1, -1002 };
    int array[length] = { 4, 1, 2, 3 };
    
    int mask{}; //переменная mask введена для отслеживания случая, когда цикл ещё не завершил обработку, а массив уже отсортирован
    for (int cycle = 0; cycle < length; ++cycle)
    {
        if (mask == 0)
        {
            mask = 0;
            for (int interCycle = 0; interCycle < length - cycle - 1; ++interCycle) //в цикл добавлена  переменная cycle для исключения обработки уже отсортированных переменных
                if (array[interCycle] > array[interCycle + 1])
                {
                    std::swap(array[interCycle], array[interCycle + 1]);
                    mask = 1; //если хотя бы раз понадобиться поменять элементы местами, переменная изменит своё значение и программа зайдет в цикл ещё раз, если элементы останутся в том же порядке, что и до обработки, то это значит, что массив отсортирован и цикл сортировки можно завершать
                }
        }
        else 
            break;
         
    }

    for (int index = 0; index < length; ++index)
        std::cout << array[index] << ' ';

    return 0;
}