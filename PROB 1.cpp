#include <iostream>
using namespace std;
int main()
{
	double num[10];
	int index, maxIndex, minIndex, smallestNum;
	double largestNum, total, average;
	cout << "Enter 10 numbers: \n";
	for (index = 0; index < 10; index++)
	num[index] = 0.0;
	for (index = 0; index < 10; index++)
	cin >> num[index];
	total = 0;
	for (index = 0; index < 10; index++)
	total = total + num[index];
	average = total / 10;
	maxIndex = 0;
	for (index = 1; index < 10; index++)
		if (num[maxIndex] < num[index])
		{
		maxIndex = index;
		largestNum = num[maxIndex];
		}
	minIndex = 0;
	for (index = 1; index < 10; index++)
		if (num[minIndex] > num[index])
		{
		minIndex = index;
		smallestNum= num[minIndex];
		}
	cout << "The Smallest Number is = " << smallestNum << endl;
	cout << "The Largest Number is = " << largestNum << endl;
	cout << "The Total of the numbers is = " << total << endl;
	cout << "The Average of the numbers is = " << average << endl;
	return 0;
}
