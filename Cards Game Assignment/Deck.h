#pragma once
#include "Headers.h"
#include "Cards.h"

class Deck: public Cards {
public:
	const static int NUMBER_OF_CARDS = 20;
	string randomDeck[NUMBER_OF_CARDS];

	//User input to choose their cards
	int card1, card2, card3, card4, card5;
	
	


public:
	//Display cards faced down
	void cardsDown();
	//User chooses from cards available
	void cardSelection();
	//Assigning cards to the user selections
	void assignCards();
	//Create a deck of random cards
	void generateRandomDeck();
};

