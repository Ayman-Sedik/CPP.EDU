#include<iostream>
using namespace std;
int main()
{
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

    if (d > cd){
		cm--;
		cd+=30;

		cout<<"Day = "<<cd-d<<endl;
	}
	else
		cout<<"Day = "<<cd-d<<endl;

    if(m>cm)
	{
		cy--;
		cm+=12;
		cout<<"Month = "<<cm-m<<endl;
	}
	else
		cout<<"Month = "<<cm-m<<endl;

    cout<<"Year = "<<cy-y<<endl;



	system("pause");
	return 0;
}
