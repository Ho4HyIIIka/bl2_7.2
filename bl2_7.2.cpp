#include <iostream>

#define SUB(a, b) ((a)-(b))


int main(int argc, char** argv)
{
	int a = 8;
	int b = 3;
	int c = 2;

	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;
}