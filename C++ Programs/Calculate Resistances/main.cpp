#include<iostream>
using namespace std;
int main()
{
//ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int R1, R2, R3, R4, Rs;
	float Rt, Rp;
	cout << "please 4 enter the resistance\n";
	cin >> R1 >> R2 >> R3 >> R4;
	Rp = float(R1 * R2 * R3) / (R1 + R2 + R3);
	Rs = R4;
	Rt = Rp + Rs;
	cout << Rp << endl;
	cout << " the total resistance is equal " << Rt << endl;
	return 0;
}
