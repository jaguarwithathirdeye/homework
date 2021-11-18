
//1
#include <iostream>

int a = 1;
int b = 2;
int c = 3;
int d = 4;
float result;

int main()
{
	result = a * (b + (float(c) / d));

	std::cout << result;

	return 0;

}



//2

int main()
{
	int a = 33, b;

	b = (a <= 21) ? 21 - a : (a - 21) * 2;

	std::cout << b;

	return 0;

}

