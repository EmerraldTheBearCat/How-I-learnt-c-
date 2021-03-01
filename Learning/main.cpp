#include <iostream>
int main()
{
	int x;//<---- This is definining the int
	x = 1;//<---- This is defining the int's value
	int y;
	y = 5;
	float fVal;//<---- This is deviding the float
	fVal = 1.5;//<---- This defining the float's value
	float Ultimatum;
	Ultimatum = y + x + fVal;//<---- This definining the float's value as the sum of the other variab
	std::cout << Ultimatum << std::endl;//<-- This is a print statement
	std::cout << Ultimatum + Ultimatum << std::endl;//<-- This is a print statement
	std::cout << Ultimatum * Ultimatum * Ultimatum << std::endl;
	class Enemy
	{
		public:
		int difficulty;
		int strength;
	};
	Enemy Koopa;
	Koopa.strength = 10;
	return 0;
}
