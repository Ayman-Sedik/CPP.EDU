#include<iostream>
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	char n;
	cout << "Enter the process you need + for sum and - for substraction and / for devision and * for multiplication" << endl;
	cin >> n;
	int i, j;
	cout << "enter 2 numbers" << endl;
	cin >> i >> j;

	switch (n) {
	case '+':
		cout << i + j << endl;
		break;
	case '-':
		cout << i - j << endl;
		break;
	case '/':
		cout << i / j << endl;
		break;
	case '*':
		cout << i * j << endl;
		break;
	}
	system("pause");
	return 0;
}
