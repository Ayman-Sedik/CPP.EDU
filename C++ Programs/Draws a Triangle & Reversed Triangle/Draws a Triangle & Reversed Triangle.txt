#include<iostream>
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int diff1 = 0, space1, space2, star1, diff = 1;
	for (int row = 1; row <= 7; row++)
	{
		space1 = (row + 5) - diff1;
		diff1 = diff1 + 2;
		for (int space = 1; space <= space1; space++)
		{
			cout << "";
		}
		for (int star = 1; star <= row; star++)
		{
			cout << star;
		}
		space2 = (row * 1) - 1;
		cout << "";
		for (int space = 1; space <= space2; space++)
		{
			cout << "";
		}
		if (row == 1)
			star1 = (row + 6);
		else
			star1 = (row + 6) - diff;
		diff = diff + 2;
		for (int star = 1; star <= star1; star++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
