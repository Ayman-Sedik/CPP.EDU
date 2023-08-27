#include<iostream>
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int diff = 0, space1;
	for (int row = 1; row <= 7; row++)
	{
		space1 = (row + 5) - diff;
		diff = diff + 2;
		cout << "";

		for (int star = 1; star <= row; star++)
		{
			cout << star;
		}
		cout << endl;
	}

	return 0;
}
