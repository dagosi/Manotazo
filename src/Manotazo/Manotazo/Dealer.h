/*
 *  Dealer.h
 *  Manotazo
 *
 */

#include "Player.h"
#include <semaphore.h>

using namespace std;

class Dealer {
public:
	Player gameStats[];
	int actualCard;
	int mound[];
	sem_t semSwipe;
private:
	int deck[];
	Player players[];
	int numPlayers;
	
	void shuffleCards();
	void createPlayer();
	int* distributeCards();
	void sayCard();
	void createLog();
	void assignCardsToLoser();
};
