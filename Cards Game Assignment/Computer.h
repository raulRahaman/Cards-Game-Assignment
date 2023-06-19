#pragma once
#include "Player.h"

class Computer : public Player{
	
	unsigned int score = 0;

	string playerDeck[5];


	//Generate deck of 5 cards for the human player
	void createDeck();
	//Display score
	void showScore();
};

