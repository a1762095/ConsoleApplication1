
#include <iostream> 
#include <string> 
#include "Referee.h"
#include "Computer.h"
#include "Human.h"
using namespace std;

int a(char a)
{
	switch (a)
	{
	case 'P':
		return 1;
	case 'R':
		return 2;
	case 'S':
		return 3;
	default:
		cout << "wu xiao";

	}


	return 0;
}

Referee::Referee()
{

}

char Referee::refGame(Human player1, Computer player2)
{
	char b =player1.makeMove();
	char c =player2.makeMove();
	int q = a(b)-a(c);

	if (q == 0) {
		return 'T';
	
	}
	else if (q == -1 || q == 2) {
		return 'W';

	}
	else
	{
		return 'L';
	}
}



Referee::~Referee()
{
}
