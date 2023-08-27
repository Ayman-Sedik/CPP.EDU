#include<iostream>
using namespace std;
int convert()
{

	int ct;
	float ft;
	cout << "enter the celsius temperature\n";
	cin >> ct;
	//processing
	ft = (ct * 32) + (9 / 5);
	cout << " the fahrenheit temperature equal " << ft << endl;


	return ft;

}
int main()
{
	//ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	float w = convert();

	return w;

	system("pause");

}
