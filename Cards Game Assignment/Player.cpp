#include "Player.h"

void Player::createDeck() {
	Deck object;

	object.generateRandomDeck();

	for (int i = 0; i < 5; i++) {
		playerDeck[i] = object.randomDeck[i];
		cout << playerDeck[i] << " | ";
	}

	cout << endl;
}

void Player::showScore() {
	Cards object;

	object.cardPoints();

	cout << "This is your current score: " << endl;
}