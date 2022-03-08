#ifndef REFEREE_h 
#define REFEREE_h 
#include"Human.h"
#include"Computer.h"
#include<string> 

class Referee
{
public:
	Referee(); // constructor
	char refGame(Human player1, Computer player2);
		// returns the outcome for player1:  'W', 'L' or 'T' (Win, Lose, Tie)

	~Referee();

};
#endif#pragma once
