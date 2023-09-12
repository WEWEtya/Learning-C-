
#include <iostream>
using namespace std;
// Calculator

int main()
{
	double Number1, Number2, Resultat, a;
	int Operation;

	cout << "Enter the number 1: ";
	cin >> Number1;

	cout << "Enter the number 2: ";
	cin >> Number2;

	cout << "Choose operation: 1 = +, 2 = -, 3 = *, 4 = / : ";
	cin >> Operation;

	switch (Operation) {

	case 1:
		Resultat = Number1 + Number2;
		break;

	case 2:
		Resultat = Number1 - Number2;
		break;

	case 3:
		Resultat = Number1 * Number2;
		break;

	case 4:
		Resultat = Number1 / Number2;
		break;

	default:
		cout << "Can`t do that ";
		break;
	}
	cout << "Your Result is: " << Resultat;
}
