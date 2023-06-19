#include "Headers.h"
#include "Match.h"
#include "Deck.h"
#include "Player.h"

void Match::matchStart() {
		
	    cout << "\t\t\t\t\t\t\t\tWelcome to Card-G!" << endl;
		cout << "Press A to continue." << endl;

		char a;
		cin >> a;

		matchRules();
	
	}
void Match::matchRules() {
	cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "Rules of Card-G:" << endl;
	cout << " -> Card-G is a turn-based card game.";
	cout << "\n -> Each Player will choose 5 cards (Cards will be faced down). ";

	cout << "\n -> There are 3 different types of card:" << "\n\t-The Card++ (Will increase the Player's score)";
	cout << "\n \t-The Card-- (Will reduce the Opponent's score)";
	cout << "\n \t-The Card!! (Will steal a card from the opponent's deck)" << endl;
	cout << " -> When all cards have been played the Player with the highest score wins." << endl;

	cout << "\nDiscalimer: If the opponent Player's score is 0,the Card-- will not reduce the opponent's score and instead will be turned into a Card++ of value 1." << endl;
	cout << "\nGood Luck!" << endl;
	
	cout << "Press A to continue." << endl;
	char y;
	cin >> y;
	matchPlay();
}
	

void Match::matchPlay() {
	//Cards object to display method cardsDown() from the Class
	Deck cards;

	cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
	string playerName;

	cout << "Enter a Player Name: ";

	cin >> playerName;

	cout << "Hello " << playerName << ", pick 5 cards from the deck below:" << endl;

	cards.cardsDown();
	cards.cardSelection();
	cards.assignCards();
	currentMatch();
}

void Match::currentMatch() {
	Cards object;
	Player player;
	Deck cards;

	int choice;
	
	cout << "Select a card to play: ";
	cin >> choice;
	cout << "You have played:" << cards.randomDeck[choice] << endl;
	object.cardPoints();
	object.showPlayerScore();
	

	cout << "Select another card to play: ";
	cin >> choice;
	cout << endl;
	object.cardPoints();
	
	
}