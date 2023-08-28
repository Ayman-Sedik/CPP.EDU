#include<iostream>
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n1, n2, sum, prod, diff;
	float quo;
	cout << "please enter two numbers\n";
	cin >> n1 >> n2;
	//processor
	sum = n1 + n2;
	prod = n1 * n2;
	diff = n1 - n2;
	quo = n1 / n2;
	cout << "-----------------------" << endl;
	cout << " the summation equal " << sum << endl;
	cout << " the multiplication equal " << prod << endl;
	cout << " the difference equal " << diff << endl;
	cout << " the quotient equal " << quo << endl;

	system("pause");
	return 0;
}
