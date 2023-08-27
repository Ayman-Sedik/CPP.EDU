#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	long long  sik, tih;
	float sikph, sikpm, simps, simpm;
	cout << "please enter the speed in kilo meter and time in hour\n";
	cin >> sik >> tih;
	sikph = float(sik) / (tih);
	sikpm = float(sik) / (tih * 60);
	simps = float((sik * 10e3) / (tih * 60 * 60));
	simpm = float((sik * 10e3) / (tih * 60));
	cout << " the sikph equal " << sikph << endl;
	cout << " the sikpm equal " << sikpm << endl;
	cout << " the simps equal " << simps << endl;
	cout << " the simpm equal " << simpm << endl;
	return 0;
}
