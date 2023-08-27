#include<iostream>
using namespace std;
int  square, cubes, x;
int main()
{

	//ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cout << "Enter the Number" << endl;
	cin >> x;
	cout << "      number     " << "     square   " << "       cubes    " << endl;
	for (int i = 1; i <= x; i++)
	{
		square = i * i;
		cubes = i * i * i;
		cout << "\t" << i << "\t" << "\t";
		cout << square << "\t" << "\t";
		cout << cubes << endl;
	}

	return 0;
}
