#include<iostream>
using namespace std;
int main()
{
    //ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int y, m, d, cy, cm, cd;
	cout << "enter the Day of Birth and Month of Birth and Year of Birth  \n";
	cin >> d;
	cin >> m;
	cin >> y;
	cout << "enter the Current Day and Current Month and Current Year\n";
	cin >> cd;
	cin >> cm;
	cin >> cy;
cout<<"------------------\n";

	cout<<"Year = "<<cy-y<<endl;
    if(m>cm)
	{
		cy--;
		cm+=12;
		cout<<"Month = "<<cm-m<<endl;
	}
	else
		cout<<"Month = "<<cm-m<<endl;

	if (d > cd){
		cm--;
		cd+=30;
		cout<<"Day = "<<cd-d<<endl;
	}
	else
		cout<<"Day = "<<cd-d<<endl;

	system("pause");
	return 0;
}
