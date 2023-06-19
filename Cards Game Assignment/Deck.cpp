#include "Deck.h"
#include "Player.h"

void Deck::generateRandomDeck() {
	srand(time(nullptr));
	
	for (int i = 0; i < NUMBER_OF_CARDS; i++) {
		int j = rand() % (i + 1);
		
			randomDeck[i] = randomDeck[j];
			randomDeck[j] = deck[i];
	}
}







void Deck::cardsDown() {
	cout << "1  -> [X]" << "\n2  -> [X]" << "\n3  -> [X]" << "\n4  -> [X]" << "\n5  -> [X]" << "\n6  -> [X]" << "\n7  -> [X]" << "\n8  -> [X]" << endl;
	cout << "9  -> [X]" << "\n10 -> [X]" << "\n11 -> [X]" << "\n12 -> [X]" << "\n13 -> [X]" << "\n14 -> [X]" << "\n15 -> [X]" << "\n16 -> [X]" << endl;
	cout << "17 -> [X]" << "\n18 -> [X]" << "\n19 -> [X]" << "\n20 -> [X]" << endl;

}




void Deck::cardSelection() {

			cout << "Pick your first card: ";
			cin >> card1;

			cout << "\nPick your second card:\t";
			cin >> card2;

			cout << "\nPick your third card:\t";
			cin >> card3;

			cout << "\nPick your fourth card:\t";
			cin >> card4;

			cout << "\nPick your fifth card:\t";
			cin >> card5;

	}

void Deck::assignCards() {
	generateRandomDeck();

	//card1 = randomDeck[1];

	cout << "Your cards are: " << randomDeck[card1] << " " << randomDeck[card2] << " " << randomDeck[card3] << " " << randomDeck[card4] << " " << randomDeck[card5] << " " << endl;

}


	


