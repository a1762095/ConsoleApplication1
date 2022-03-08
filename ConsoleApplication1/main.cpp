#include <iostream>
#include "Referee.h"
#include "Computer.h"
#include "Human.h"
using namespace std;

int main()
{
	Referee a;
	Human player1;
	Computer player2;

	cout << a.refGame(player1, player2) << endl;

	return 0;
}