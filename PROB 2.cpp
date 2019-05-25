#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	
	int provinceA[7];
	int provinceB[7];
	int provinceC[7];
	cout << "Enter the temperature of Province A\n";
	for (int a = 1; a <= 7; a++)
	{
		cout << "Day " << a << ": ";
		cin >> provinceA[a];
	}
	cout << " \n";
	cout << "Enter the temperature of Province B\n";
	for (int b = 1; b <= 7; b++)
	{
		cout << "Day " << b << ": ";
		cin >> provinceB[b];
	}

	cout << " \n";

	cout << "Enter the temperature of Province C\n";
	for (int c = 1; c <= 7; c++)
	{
		cout << "Day " << c << ": ";
		cin >> provinceC[c];
	}
	cout << endl;
	cout << "Displaying Values of Temperatures: \n";
	for (int x = 1; x <= 7; x++)
	{
	cout << "Province A, Day " << x << " :" << provinceA[x] << endl;
	}
	cout << endl;
	for (int y = 1; y <= 7; y++)
	{
	cout << "Province B, Day " << y << " :" << provinceB[y] << endl;
	}
	cout << endl;
	for (int z = 1; z <= 7; z++)
	{
	cout << "Province C, Day " << z << " :" << provinceC[z] << endl;
	}
	return 0;

}
