// Sizeof;

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");

	int arr[]{ 5, 34, 653, 235, 65, 3245, 234, 64, 123, 4 };

	int a = sizeof(arr);
	int b = sizeof(int);

	for (int i = 0; i < a / b; i++)
	{
		cout << arr[i] << endl;
	}
}
