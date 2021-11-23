#include <iostream>
//1

using namespace std;

int main()
{
	int a, b;
	cout << "add two numbers : " << endl;
	cin >> a >> b;

	if (a + b >= 10 && a + b <= 20)
	{
		cout << "true";

	}

	else
	{

		cout << "false";
	}
}


//2


int main()

{
const int a = 5, b = 6;


	if (a + b == 10 || a ==10 && b == 10)
	{
		cout << "true";
	}
	else;
	{
		cout << "false";
	}
}

//3


int main()
{
	const int NUMBERS = 50;
	cout << "Nechetnie chisla: ";

	for (int a = 1; a <= NUMBERS; ++a)
	{
		if (a % 2)
			cout << a << " ";
	}
	cout << '\n';

	return 0;
}

