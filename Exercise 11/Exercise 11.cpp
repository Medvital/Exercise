#include <iostream>
#include <Windows.h>
#include <string>

using std::string; using std::cout; using std::cin; using std::getline; using std::endl;

enum Cards { TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUENN, KING, ACE, MAXC };
enum Suit { CLUBS, DIAMONDS, HEARTS, SPADES, MAXS }; //Трефы, бубны, червы, пики

struct Card {
    Cards card;
    Suit suit;
} card;

void printCard(const Card &onecard) {
    
	switch (card.card)
	{
	case TWO:		std::cout << "2"; break;
	case THREE:		std::cout << "3"; break;
	case FOUR:		std::cout << "4"; break;
	case FIVE:		std::cout << "5"; break;
	case SIX:		std::cout << "6"; break;
	case SEVEN:		std::cout << "7"; break;
	case EIGHT:		std::cout << "8"; break;
	case NINE:		std::cout << "9"; break;
	case TEN:		std::cout << "T"; break;
	case JACK:		std::cout << "V"; break;
	case QUENN:	        std::cout << "D"; break;
	case KING:		std::cout << "K"; break;
	case ACE:		std::cout << "T"; break;
	}

	switch (card.suit)
	{
	case CLUBS:		std::cout << "TR"; break;
	case DIAMONDS:	std::cout << "B"; break;
	case HEARTS:	std::cout << "CH"; break;
	case SPADES:	std::cout << "P"; break;
	}
}


int main()
{
    setlocale(LC_ALL, "rus");

    Card jackClubs{ SIX, SPADES };
    Card *p = &jackClubs;
    printCard(*p);

    return 0;
}