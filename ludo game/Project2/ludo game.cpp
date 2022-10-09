#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int p1 = -1, p2 = -1, n, x = 1;
bool p1flag = 0, p2flag = 0, wflag = 0;
char in;

void keypress() {
	in = _getch();

}

void random() {

	n = (rand() % 6) + 1;
}


int main()
{
	srand(10);
	cout << "welcome to ludo \n";
	cout << "two players p1 and p2 are needed\n";
	cout << "player 1 press 'p' key and player 2 press 'q' key to roll the dice\n";

	while (((p1 != 56) || (p2 != 56)) && wflag == 0)
	{

		if (wflag == 0) {
			x = 1;
			while (x == 1)
			{
				cout << "player one's turn\n";
				keypress();
				if (in == 'p')
				{

					random();
					if (n != 6)
						x = 0;
					if (n == 6 && p1flag != 1)
					{
						p1 = 0;
						p1flag = 1;
					}
					else if (p1flag == 1)
						if ((p1 + n) <= 56)
							p1 = p1 + n;
					cout << n << "  :  " << p1 << endl;
					if (p1 == 56)
					{
						cout << "player 1 has won the game";
						wflag = 1;
					}
				}
			}
		}
		if (wflag == 0) {
			x = 1;
			while (x == 1)
			{
				cout << "player two's turn\n";
				keypress();
				if (in == 'q')
				{

					random();
					if (n != 6)
						x = 0;
					if (n == 6 && p2flag != 1)
					{
						p2 = 0;
						p2flag = 1;
					}
					else if (p2flag == 1)
						if ((p2 + n) <= 56)
							p2 = p2 + n;
					cout << n << "  :  " << p2 << endl;
					if (p2 == 56)
					{
						cout << "player 2 has won the game";
						wflag = 1;
					}
				}
			}
		}
	}

	cout << endl;
	system("pause");
	return 0;

}