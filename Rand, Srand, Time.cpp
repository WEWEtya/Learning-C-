// Randomize;
// Rand; Srand; Srand time null; #include <ctime>

#include <iostream>
#include <ctime>

using namespace std;


void main()
{
	setlocale(LC_ALL, "ukr");

	srand(time(NULL));

	int a = rand()%10 + 5;

	cout << a << endl;

	a = rand()%306;

	cout << a << endl;
}
