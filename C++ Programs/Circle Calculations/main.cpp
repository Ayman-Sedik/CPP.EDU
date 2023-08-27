#include<iostream>
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int r, d;
	float cf, area;
	cout << "please enter the radius of the circle\n";
	cin >> r;
	d = 2 * r;
	cf = 2 * 3.14 * r;
	area = 3.14 * r * r;
	cout << " the diameter of circle equal " << d << endl;
	cout << " the circumference equal " << cf << endl;
	cout << " the area of circle equal " << area << endl;
	return 0;
}
