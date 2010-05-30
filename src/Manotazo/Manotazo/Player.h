/*
 *  Dealer.h
 *  Manotazo
 *
 */

#include <pthread.h>
#include <queue>
#include <semaphore.h>

using namespace std;

class Player {
public:
	sem_t semPutCard;
	
private:
	bool turn;
	int playerId;
	int ractionSpeed;
	pthread_t put;
	pthread_t watch;
	queue<int> cards;
	
	
	void putCard();
	void watchCard();
	void swipe();
};



