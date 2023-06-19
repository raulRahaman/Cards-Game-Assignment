#include "Computer.h"

void Computer::createDeck() {
	cout << "Computers Cards: [X] [X] [X] [X] [X]" << endl;
	
		Deck object;

		object.generateRandomDeck();

		for (int i = 0; i < 5; i++) {
			playerDeck[i] = object.randomDeck[i];

		cout << endl;
	}
}

void Computer ::showScore() {
	Cards object;

	object.cardPoints();

	cout << playerScore << endl;
}