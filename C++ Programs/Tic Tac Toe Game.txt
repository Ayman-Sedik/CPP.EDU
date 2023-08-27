#include <iostream>
#include<stdlib.h>
using namespace std;
char Matrix[3][3] = { '1','2','3','4','5','6','7','8','9' };
char Player = 'X';
void Print()
{
	system("cls");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "\t" << Matrix[i][j] << "|" << " ";
		}
		cout << endl;
		cout << "\t" << "___________________" << endl;
	}
}
void ZONE()
{
	char Pos;
	cout << "The Role of Player ( " << Player << ") : ";
	cin >> Pos;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (Matrix[i][j] == Pos) {
				Matrix[i][j] = Player;
				if (i == 0 && j == 0 && Matrix[0][0] == 'X') {

					if (Matrix[0][1] == 'X' && Matrix[0][2] != 'O' && Matrix[0][2] != 'X') {
						Matrix[0][2] = 'O';
					}
					else if (Matrix[1][0] == 'X' && Matrix[2][0] != 'O' && Matrix[2][0] != 'X') {
						Matrix[2][0] = 'O';
					}
					else {
						if (Matrix[1][1] != 'X' && Matrix[1][1] != 'O')
							Matrix[1][1] = 'O';

						else if (Matrix[2][0] != 'X' && Matrix[2][0] != 'O')
							Matrix[2][0] = 'O';
						else if (Matrix[0][2] != 'X' && Matrix[0][2] != 'O')
							Matrix[0][2] = 'O';
						else if (Matrix[1][0] != 'X' && Matrix[1][0] != 'O')
							Matrix[1][0] = 'O';
						else if (Matrix[0][1] != 'X' && Matrix[0][1] != 'O')
							Matrix[0][1] = 'O';
						else if (Matrix[1][2] != 'X' && Matrix[1][2] != 'O')
							Matrix[1][2] = 'O';
						else if (Matrix[2][1] != 'X' && Matrix[2][1] != 'O')
							Matrix[2][1] = 'O';
						else if (Matrix[2][2] != 'X' && Matrix[2][2] != 'O')
							Matrix[2][2] = 'O';
					}
				}
				else if (i == 1 && j == 1 && Matrix[1][1] == 'X') {
					if (Matrix[0][2] == 'X' && Matrix[2][0] != 'X' && Matrix[2][0] != 'O') {
						Matrix[2][0] = 'O';
					}
					else  if (Matrix[0][0] == 'X' && Matrix[2][2] != 'O' && Matrix[2][2] != 'X')
					{
						Matrix[2][2] = 'O';
					}
					else if (Matrix[0][2] == 'X' && Matrix[2][0] != 'O' && Matrix[2][0] != 'X') {
						Matrix[2][0] = 'O';
					}
					else if (Matrix[0][1] == 'X' && Matrix[2][1] != 'O' && Matrix[2][1] != 'X') {
						Matrix[2][1] = 'O';
					}
					else if (Matrix[1][2] == 'X' && Matrix[1][0] != 'O' && Matrix[1][0] != 'X') {
						Matrix[1][0] = 'O';
					}
					else if (Matrix[1][0] == 'X' && Matrix[1][2] != 'O' && Matrix[1][2] != 'X') {
						Matrix[1][2] = 'O';
					}
					else if (Matrix[2][1] == 'X' && Matrix[0][1] != 'O' && Matrix[0][1] != 'X') {
						Matrix[0][1] = 'O';
					}
					else if (Matrix[2][0] == 'X' && Matrix[0][2] != 'O')Matrix[0][2] = 'O';
					else {
						if (Matrix[0][0] != 'X' && Matrix[0][0] != 'O')
							Matrix[0][0] = 'O';
						else if (Matrix[0][1] != 'X' && Matrix[0][1] != 'O')
							Matrix[0][1] = 'O';
						else if (Matrix[0][2] != 'X' && Matrix[0][2] != 'O')
							Matrix[0][2] = 'O';
						else if (Matrix[2][0] != 'X' && Matrix[2][0] != 'O')
							Matrix[2][0] = 'O';
						else if (Matrix[1][0] != 'X' && Matrix[1][0] != 'O')
							Matrix[1][0] = 'O';
						else if (Matrix[1][2] != 'X' && Matrix[1][2] != 'O')
							Matrix[1][2] = 'O';
						else if (Matrix[2][1] != 'X' && Matrix[2][1] != 'O')
							Matrix[2][1] = 'O';
						else if (Matrix[2][2] != 'X' && Matrix[2][2] != 'O')
							Matrix[2][2] = 'O';
					}
				}
				else if (i == 0 && j == 1 && Matrix[0][1] == 'X') {
					if (Matrix[0][0] == 'X' && Matrix[0][2] != 'O' && Matrix[0][2] != 'X') {
						Matrix[0][2] = 'O';
					}
					else if (Matrix[1][1] == 'X' && Matrix[2][1] != 'O' && Matrix[2][1] != 'X') {
						Matrix[2][1] = 'O';
					}
					else if (Matrix[0][2] == 'X' && Matrix[0][0] != 'O' && Matrix[0][0] != 'X') {
						Matrix[0][0] = 'O';
					}
					else {
						if (Matrix[1][1] != 'X' && Matrix[1][1] != 'O')
							Matrix[2][0] = 'O';

						else if (Matrix[0][0] != 'X' && Matrix[0][0] != 'O')
							Matrix[0][0] = 'O';
						else if (Matrix[0][2] != 'X' && Matrix[0][2] != 'O')
							Matrix[0][2] = 'O';
						else if (Matrix[2][0] != 'X' && Matrix[2][0] != 'O')
							Matrix[1][1] = 'O';
						else if (Matrix[1][0] != 'X' && Matrix[1][0] != 'O')
							Matrix[1][0] = 'O';
						else if (Matrix[1][2] != 'X' && Matrix[1][2] != 'O')
							Matrix[1][2] = 'O';
						else if (Matrix[2][1] != 'X' && Matrix[2][1] != 'O')
							Matrix[2][1] = 'O';
						else if (Matrix[2][2] != 'X' && Matrix[2][2] != 'O')
							Matrix[2][2] = 'O';
					}
					break;
				}
				else if (i == 2 && j == 1 && Matrix[2][1] == 'X') {
					if (Matrix[2][0] == 'X' && Matrix[2][2] != 'O' && Matrix[2][2] != 'X') {
						Matrix[2][2] = 'O';
					}

					else if (Matrix[2][2] == 'X' && Matrix[2][0] != 'O' && Matrix[2][0] != 'X') {
						Matrix[2][0] = 'O';
					}
					else if (Matrix[1][1] == 'X' && Matrix[0][1] != 'O' && Matrix[0][1] != 'X') {
						Matrix[0][1] = 'O';
					}
					else {
						if (Matrix[1][0] != 'X' && Matrix[1][0] != 'O')
							Matrix[1][0] = 'O';

						else if (Matrix[0][0] != 'X' && Matrix[0][0] != 'O')
							Matrix[0][0] = 'O';
						else if (Matrix[0][2] != 'X' && Matrix[0][2] != 'O')
							Matrix[0][2] = 'O';
						else if (Matrix[1][1] != 'X' && Matrix[1][1] != 'O')
							Matrix[1][1] = 'O';
						else if (Matrix[1][2] != 'X' && Matrix[1][2] != 'O')
							Matrix[1][2] = 'O';
						else if (Matrix[2][0] != 'X' && Matrix[2][0] != 'O')
							Matrix[2][0] = 'O';
						else if (Matrix[0][1] != 'X' && Matrix[0][1] != 'O')
							Matrix[0][1] = 'O';
						else if (Matrix[2][2] != 'X' && Matrix[2][2] != 'O')
							Matrix[2][2] = 'O';
					}
					break;

				}
				else if (i == 0 && j == 2 && Matrix[0][2] == 'X') {
					if (Matrix[1][1] == 'X' && Matrix[2][0] != 'X' && Matrix[2][0] != 'O') {
						Matrix[2][0] = 'O';
					}
					else if (Matrix[0][1] == 'X' && Matrix[0][0] != 'O' && Matrix[0][0] != 'X') {
						Matrix[0][0] = 'O';
					}
					else if (Matrix[1][2] == 'X' && Matrix[2][2] != 'O' && Matrix[2][2] != 'X') {
						Matrix[2][2] = 'O';
					}
					else {
						if (Matrix[0][1] != 'X' && Matrix[0][1] != 'O')
							Matrix[0][1] = 'O';

						else if (Matrix[0][0] != 'X' && Matrix[0][0] != 'O')
							Matrix[0][0] = 'O';
						else if (Matrix[2][0] != 'X' && Matrix[2][0] != 'O')
							Matrix[2][0] = 'O';
						else if (Matrix[1][1] != 'X' && Matrix[1][1] != 'O')
							Matrix[1][1] = 'O';
						else if (Matrix[1][0] != 'X' && Matrix[1][0] != 'O')
							Matrix[1][0] = 'O';
						else if (Matrix[1][2] != 'X' && Matrix[1][2] != 'O')
							Matrix[1][2] = 'O';
						else if (Matrix[2][1] != 'X' && Matrix[2][1] != 'O')
							Matrix[2][1] = 'O';
						else if (Matrix[2][2] != 'X' && Matrix[2][2] != 'O')
							Matrix[2][2] = 'O';
					}
					break;
				}
				else if (i == 1 && j == 2 && Matrix[1][2] == 'X') {
					if (Matrix[0][2] == 'X' && Matrix[2][2] != 'O' && Matrix[2][2] != 'X') {
						Matrix[2][2] = 'O';
					}
					else if (Matrix[2][2] == 'X' && Matrix[0][2] != 'O' && Matrix[0][2] != 'X') {
						Matrix[0][2] = 'O';
					}
					else if (Matrix[1][1] == 'X' && Matrix[1][0] != 'O' && Matrix[1][0] != 'X') {
						Matrix[1][0] = 'O';
					}
					else {
						if (Matrix[0][1] != 'X' && Matrix[0][1] != 'O')
							Matrix[0][1] = 'O';

						else if (Matrix[0][0] != 'X' && Matrix[0][0] != 'O')
							Matrix[0][0] = 'O';
						else if (Matrix[0][2] != 'X' && Matrix[0][2] != 'O')
							Matrix[0][2] = 'O';
						else if (Matrix[1][1] != 'X' && Matrix[1][1] != 'O')
							Matrix[1][1] = 'O';
						else if (Matrix[1][0] != 'X' && Matrix[1][0] != 'O')
							Matrix[1][0] = 'O';
						else if (Matrix[2][0] != 'X' && Matrix[2][0] != 'O')
							Matrix[2][0] = 'O';
						else if (Matrix[2][1] != 'X' && Matrix[2][1] != 'O')
							Matrix[2][1] = 'O';
						else if (Matrix[2][2] != 'X' && Matrix[2][2] != 'O')
							Matrix[2][2] = 'O';
					}
					break;
				}
				else if (i == 2 && j == 0 && Matrix[2][0] == 'X') {
					if (Matrix[1][0] == 'X' && Matrix[0][0] != 'O' && Matrix[0][0] != 'X') {
						Matrix[0][0] = 'O';
					}
					else if (Matrix[2][1] == 'X' && Matrix[2][2] != 'O' && Matrix[2][2] != 'X') {
						Matrix[2][2] = 'O';
					}
					else {
						if (Matrix[0][1] != 'X' && Matrix[0][1] != 'O')
							Matrix[0][1] = 'O';

						else if (Matrix[0][0] != 'X' && Matrix[0][0] != 'O')
							Matrix[0][0] = 'O';
						else if (Matrix[0][2] != 'X' && Matrix[0][2] != 'O')
							Matrix[0][2] = 'O';
						else if (Matrix[1][1] != 'X' && Matrix[1][1] != 'O')
							Matrix[1][1] = 'O';
						else if (Matrix[1][0] != 'X' && Matrix[1][0] != 'O')
							Matrix[1][0] = 'O';
						else if (Matrix[1][2] != 'X' && Matrix[1][2] != 'O')
							Matrix[1][2] = 'O';
						else if (Matrix[2][1] != 'X' && Matrix[2][1] != 'O')
							Matrix[2][1] = 'O';
						else if (Matrix[2][2] != 'X' && Matrix[2][2] != 'O')
							Matrix[2][2] = 'O';
					}
					break;
				}
				else if (i == 2 && j == 1 && Matrix[2][1] == 'X') {
					if (Matrix[2][0] == 'X' && Matrix[2][2] != 'O' && Matrix[2][2] != 'X') {
						Matrix[2][2] = 'O';
					}

					else if (Matrix[2][2] == 'X' && Matrix[2][0] != 'O' && Matrix[2][0] != 'X') {
						Matrix[2][0] = 'O';
					}
					else if (Matrix[1][1] == 'X' && Matrix[0][1] != 'O' && Matrix[0][1] != 'X') {
						Matrix[0][1] = 'O';
					}
					else {
						if (Matrix[1][0] != 'X' && Matrix[1][0] != 'O')
							Matrix[1][0] = 'O';

						else if (Matrix[0][0] != 'X' && Matrix[0][0] != 'O')
							Matrix[0][0] = 'O';
						else if (Matrix[0][2] != 'X' && Matrix[0][2] != 'O')
							Matrix[0][2] = 'O';
						else if (Matrix[1][1] != 'X' && Matrix[1][1] != 'O')
							Matrix[1][1] = 'O';
						else if (Matrix[1][2] != 'X' && Matrix[1][2] != 'O')
							Matrix[1][2] = 'O';
						else if (Matrix[2][0] != 'X' && Matrix[2][0] != 'O')
							Matrix[2][0] = 'O';
						else if (Matrix[0][1] != 'X' && Matrix[0][1] != 'O')
							Matrix[0][1] = 'O';
						else if (Matrix[2][2] != 'X' && Matrix[2][2] != 'O')
							Matrix[2][2] = 'O';
					}
					break;
				}
				else   if (i == 2 && j == 2 && Matrix[2][2] == 'X') {
					if (Matrix[1][2] == 'X' && Matrix[0][2] != 'X' && Matrix[0][2] != 'O') {
						Matrix[0][2] = 'O';
					}
					else if (Matrix[2][1] == 'X' && Matrix[2][0] != 'X' && Matrix[2][0] != 'O') {
						Matrix[2][0] = 'O';
					}
					else {
						if (Matrix[0][1] != 'X' && Matrix[0][1] != 'O')
							Matrix[0][1] = 'O';

						else if (Matrix[0][0] != 'X' && Matrix[0][0] != 'O')
							Matrix[0][0] = 'O';
						else if (Matrix[0][2] != 'X' && Matrix[0][2] != 'O')
							Matrix[0][2] = 'O';
						else if (Matrix[1][1] != 'X' && Matrix[1][1] != 'O')
							Matrix[1][1] = 'O';
						else if (Matrix[1][0] != 'X' && Matrix[1][0] != 'O')
							Matrix[1][0] = 'O';
						else if (Matrix[1][2] != 'X' && Matrix[1][2] != 'O')
							Matrix[1][2] = 'O';
						else if (Matrix[2][1] != 'X' && Matrix[2][1] != 'O')
							Matrix[2][1] = 'O';
						else if (Matrix[2][0] != 'X' && Matrix[2][0] != 'O')
							Matrix[2][0] = 'O';
					}
					break;

				}
				else if (i == 1 && j == 0 && Matrix[1][0] == 'X') {
					if (Matrix[0][0] == 'X' && Matrix[2][0] != 'O' && Matrix[2][0] != 'X') {
						Matrix[2][0] = 'O';
					}
					else if (Matrix[1][1] == 'X' && Matrix[1][2] != 'O' && Matrix[1][2] != 'X') {
						Matrix[1][2] = 'O';
					}
					else if (Matrix[2][0] == 'X' && Matrix[0][0] != 'O' && Matrix[0][0] != 'X') {
						Matrix[0][0] = 'O';
					}

					else {
						if (Matrix[0][1] != 'X' && Matrix[0][1] != 'O')
							Matrix[0][1] = 'O';

						else if (Matrix[0][0] != 'X' && Matrix[0][0] != 'O')
							Matrix[0][0] = 'O';
						else if (Matrix[0][2] != 'X' && Matrix[0][2] != 'O')
							Matrix[0][2] = 'O';
						else if (Matrix[1][1] != 'X' && Matrix[1][1] != 'O')
							Matrix[1][1] = 'O';
						else if (Matrix[1][2] != 'X' && Matrix[1][2] != 'O')
							Matrix[1][2] = 'O';
						else if (Matrix[2][0] != 'X' && Matrix[2][0] != 'O')
							Matrix[2][0] = 'O';
						else if (Matrix[2][1] != 'X' && Matrix[2][1] != 'O')
							Matrix[2][1] = 'O';
						else if (Matrix[2][2] != 'X' && Matrix[2][2] != 'O')
							Matrix[2][2] = 'O';
					}
					break;
				}
			}
		}
	}
}
void XO()
{
	char Pos;
	cout << "Choose Your Positon - Player ( " << Player << ") : ";
	cin >> Pos;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (Matrix[i][j] == Pos)
				Matrix[i][j] = Player;
		}
	}
	if (Player == 'X')
		Player = 'O';
	else
		Player = 'X';
}
char Winner()
{
	int Xc = 0, Oc = 0;
	int counter = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (Matrix[i][j] != 'X' && Matrix[i][j] != 'O')
				counter++;
			if (Matrix[i][j] == 'X')
				Xc++;
			else if (Matrix[i][j] == 'O')Oc++;
			if (Xc == 3 || Oc == 3)
				return Xc > Oc ? 'X' : 'O';
		}
		Xc = 0;
		Oc = 0;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (Matrix[j][i] == 'X')
				Xc++;
			else if (Matrix[j][i] == 'O')
				Oc++;
			if (Xc == 3 || Oc == 3) {
				return Xc > Oc ? 'X' : 'O';
			}
		}
		Xc = 0;
		Oc = 0;
	}
	if (Matrix[0][0] == 'X' && Matrix[1][1] == 'X' && Matrix[2][2] == 'X')  return 'X';
	else if (Matrix[0][0] == 'O' && Matrix[1][1] == 'O' && Matrix[2][2] == 'O')return 'O';
	else if (Matrix[0][2] == 'X' && Matrix[1][1] == 'X' && Matrix[2][0] == 'X') return 'X';
	else if (Matrix[0][2] == 'O' && Matrix[1][1] == 'O' && Matrix[2][0] == 'O')return 'O';
	if (counter == 0)
		return 'Z';
	return '.';
}
int main()
{
	//ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, c;
	cout << " ------ Hello To XO Game ------- <<We Wish You To Enjoy With The Game >>!!     " << endl << endl << endl << " ______________________________________________________________________________ " << endl << endl << endl;
	cout << "     ----Press 1 To Play Against Computer && and 2 For 2 Players---- " << endl << endl << endl;
	cin >> n;
	while (Winner() == '.')
	{
		if (n == 1) {

			Print();
			ZONE();
		}
		else if (n == 2) {

			Print();
			XO();
		}
		else {
			cout << endl << endl;
			system("cls");

			cout << "Wrong Selection Try Again !! " << endl;
			cout << "_______________________________________" << endl << endl << endl;
			cout << "   <<You Want To Play Against Computer Press 1 && Against Freind Press 2>>" << endl << endl;
			cin >> n;
			if (n == 1 || n == 2) {
				continue;
			}
		}
	}

	Print();
	if (Winner() == 'Z')
		cout << "\n No Winner !! \n \n " << endl << endl << endl;
	else {
		if (n == 2) {
			cout << "The Winner is Player " << Winner() << "\t ,,Congratulations " << endl << endl << endl;
		}
		else if (n == 1) {
			if (Winner() == 'X') {
				cout << " \n \tThe Winner Is Player " << ", Congratulations ! " << endl;
			}
			else if (Winner() == 'O') {
				cout << " \n \t The Winner Is Computer " << endl << endl;
			}
		}
	}
/*	cout << "If You Want to Play Again Press 3 " << endl;
	cin >> c;

	if (c == 3) {
		system("cls");

		main();
	}
	*/
	return 0;
}
