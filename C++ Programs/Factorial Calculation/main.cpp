#include<iostream>
using namespace std;
int fact()
{
	//ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int d, f = 1;
	float z;
	cout << "Enter Number\n";
	cin >> d;
	for (int i = 1; i <= d; i++)
		f = f * i;
	cout << f << endl;

}
int main()
{
	int w = fact();
	return w;
}
