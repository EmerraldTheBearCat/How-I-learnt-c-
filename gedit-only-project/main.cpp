#include <iostream>
#include <string>
int Stage1Choice1(void)
{
	std::cout << "You come to the entrance of an enormous cavern" << std::endl;
	return 0;
}
int Stage1(void)
{
	int StageOneChoice;
	std::cout << "You find 3 gates to an enormous tunnel" << std::endl;
	std::cout << "1 2 or 3" << std::endl;
	std::cin >> StageOneChoice;
	std::cout << "Your choice is: " << StageOneChoice << std::endl;
	if (StageOneChoice = 2) {
	Stage1Choice1();
	}
	return 0;
}
int main()
{
	Stage1();
	return 0;
}
