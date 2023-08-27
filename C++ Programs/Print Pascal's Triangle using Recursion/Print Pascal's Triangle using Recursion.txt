#include<iostream>
using namespace std;
long factorialNum(int number)
{
	if (number == 0 || number == 1)
	{
		return 1;
	}
	else
	{
		return number * factorialNum(number - 1);
	}
}

int main()
{
	//ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int i, j, number;

	cout << "\nPlease Enter the Number for Pascal Triangle  =  ";
	cin >> number;
	cout << "\n------ Pascal Triangle -------\n ";
	for (i = 0; i < number; i++)
	{
		for (j = 0; j <= (number - i - 2); j++)
		{
			cout << " ";
		}
		for (j = 0; j <= i; j++)
		{
			cout << factorialNum(i) / (factorialNum(j) * factorialNum(i - j)) << " ";
		}
		cout << "\n";
	}
	return 0;
}
