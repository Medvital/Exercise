#include <iostream>
#include <Windows.h>
#include <string>
#include <typeinfo>
#include <cstdlib>
#include <random>

using std::string; using std::cout; using std::cin; using std::getline; using std::endl;

//Напишите программу - игру типа Hi - Lo:
//Во - первых, ваша программа должна выбрать случайное целое число в диапазоне от 1 до 100.
//Пользователю дается 7 попыток, чтобы угадать это число.
//Если пользователь не угадал число, то программа должна подсказывать, была ли его догадка слишком большой или слишком маленькой.
//Если пользователь угадал число, то программа должна сообщить, что всё верно — вы выиграли.
//Если же у пользователя кончились попытки, и он не угадал число, то программа должна сообщить ему, что он проиграл и показать правильный результат.
//В конце игры программа должна спросить у пользователя, не хочет ли он сыграть еще раз.Если пользователь не введет ни y, ни n(а что - то другое), то программа должна спросить его еще раз.
//Пример результата выполнения вашей программы :
//Let's play a game. I'm thinking of a number.You have 7 tries to guess what it is.
//Guess #1: 64
//Your guess is too high.
//Guess #2: 32
//Your guess is too low.
//Guess #3: 54
//Your guess is too high.
//Guess #4: 51
//Correct!You win!
//Would you like to play again(y / n) ? y
//Let's play a game. I'm thinking of a number.You have 7 tries to guess what it is.
//Guess #1: 64
//Your guess is too high.
//Guess #2: 32
//Your guess is too low.
//Guess #3: 54
//Your guess is too high.
//Guess #4: 51
//Your guess is too high.
//Guess #5: 36
//Your guess is too low.
//Guess #6: 45
//Your guess is too low.
//Guess #7: 48
//Your guess is too low.
//Sorry, you lose.The correct number was 49.
//Would you like to play again(y / n) ? q
//Would you like to play again(y / n) ? f
//Would you like to play again(y / n) ? n
//Thank you for playing.


void game()
{
    cout << "Let's play a game. I'm thinking of a number from 1 to 100.You have 7 tries to guess what it is.\n";

    std::random_device random_device; // Источник энтропии.
    std::mt19937 generator(random_device()); // Генератор случайных чисел.
    // (Здесь берется одно инициализирующее значение, можно брать больше)
    std::uniform_int_distribution<> distribution(1, 100); // Равномерное распределение [1, 100]
    
    int number = distribution(generator); //генерация рандомного числа, здесь мы выбираем число, которое будет угадывать пользователь
    int tries = 1;
    int userTryNumber{};

    cout << "Guess #" << tries << ": ";
    cin >> userTryNumber;

    tries++;

    while (userTryNumber != number && tries < 8)
    {        
        if (userTryNumber > number)
        {
            cout << "Your guess is too high.\n";
            cout << "Guess #" << tries << ": ";
            cin >> userTryNumber;
            tries++;
        }
        else
        {
            cout << "Your guess is too low.\n";
            cout << "Guess #" << tries << ": ";
            cin >> userTryNumber;
            tries++;
        }
    }
    tries <= 8 ? cout << "Correct!You win! " : cout << "Sorry, you lose.The correct number was " << number << endl;
}

int main()
{
    setlocale(LC_ALL, "rus");
    
   game();

    string answer;

    while (true)
    {
        cout << "Would you like to play again(y / n) ? ";
        cin >> answer;

        while (answer != "y" && answer != "n")
        {
            cout << "Would you like to play again(y / n) ? ";
            cin >> answer;
            cout << endl;
        }
        if (answer == "y")
        {
            game();
        }
        else
        {
            cout << "Thank you for playing.";
            break;
        }
    }

    return 0;
}
