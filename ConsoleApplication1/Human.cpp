#include "Human.h"
#include <iostream>

Human::Human()
{
	a = ' ';
}

char Human::makeMove()
{
	std::cout << "Enter move:";
	std::cin >> a;
	return a;
}

Human::~Human()
{
}
