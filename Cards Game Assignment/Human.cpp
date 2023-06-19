#include "Human.h"

void Human::showScore() {
	Cards object;

	object.cardPoints();

	cout << playerScore << endl;
}

void Human::createDeck() {
	Deck object;

	object.generateRandomDeck();

	for (int i = 0; i < 5; i++) {
		playerDeck[i] = object.randomDeck[i];
		cout << playerDeck[i] << " | ";
	}

	cout << endl;
}