#include "Cards.h"
#include "Player.h"

//Method to calculate the players' points
void Cards::cardPoints() {
	Player player;

	for (int i = 0; i <= TYPES_OF_CARD; i++) {
		int num, num2;

			 if (deck[i] == "1+") {
				player.playerScore = player.playerScore + 1;
			}
			else if (deck[i] == "2+") {
				player.playerScore = player.playerScore + 2;
			}
			else if (deck[i] == "3+") {
				player.playerScore = player.playerScore + 3;
			}
			else if (deck[i] == "4+") {
				player.playerScore = player.playerScore + 4;
			}
			else if (deck[i] == "5+") {
				player.playerScore = player.playerScore + 5;
			}
			else if (deck[i] == "6+") {
				player.playerScore = player.playerScore + 6;
			}
			else if (deck[i] == "7+") {
				player.playerScore = player.playerScore + 7;
			}
			else if (deck[i] == "10+") {
				player.playerScore = player.playerScore + 10;
			}
			else if (deck[i] == "1-") {
				player.playerScore = player.playerScore - 1;
			}
			else if (deck[i] == "2-") {
				player.playerScore = player.playerScore - 2;
			}
			else if (deck[i] == "3-") {
				player.playerScore = player.playerScore - 3;
			}
			else if (deck[i] == "4-") {
				player.playerScore = player.playerScore - 4;
			}
			else if (deck[i] == "7-") {
				player.playerScore = player.playerScore - 7;
			}
		}
	}
 
void Cards::showPlayerScore() {
	cardPoints();
	Player player;

	cout << "This is your current score: " << player.playerScore << endl;

}


