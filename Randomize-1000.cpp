// Randomizer 1000

#include <iostream>
#include <ctime>

using namespace std;


void main()
{
	setlocale(LC_ALL, "ukr");

	srand(time(NULL));

	int const size = 10;

	int arr[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 1000;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}

}
