#include <iostream>
int core(void)
{
	std::cout << "This is a called function in vim" << std::endl;
	std::cout << "This means I can just write code once and run it multiple times without hassle" << std::endl;
	return 0;
}
int main()
{
	core();
	core();
	bool condition;
	condition = true;
	if (condition = true) {
		core();
	}
}
