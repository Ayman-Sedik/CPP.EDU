#include<iostream>
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, sum = 0, m;
	cout << "enter the number\n";
	cin >> n;
	while (n != 0) {
		//processing
		m = n % 10;
		sum += m;
		n = n / 10;
	}
	cout<<"----------------"<<endl;
	cout << sum << endl;

	return 0;
}
