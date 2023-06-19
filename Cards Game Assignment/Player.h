#pragma once
#include "Headers.h"
#include "Deck.h"


class Player{
	public:
		unsigned int playerScore = 0;
		string playerDeck[5];

		//Generate deck of 5 cards for the human player
		void createDeck();
		//Display score
		void showScore();
};

