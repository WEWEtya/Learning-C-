// Array;

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "urk");

	const int size = 5;

	int mass[size] = { 0, 5, 6, 3, 6 };

	for (int i = 0; i < size; i++)
	{
		cout << mass[i] << endl;
	}

}

