#include<iostream>
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int c;
	cout << "Enter Elements Of Array" << endl;
	cin >> c;
	int arr['c'], small = 1000;
	cout << "enter the numbers" << endl;
	for (int i = 0; i < c; i++)
	{
		cin >> arr[i];
		if (arr[i] < small)
			small = arr[i];
	}
	cout << endl;
	cout << " smallest number " << small << endl;
	return 0;
}
