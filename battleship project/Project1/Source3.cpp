#include <cstdlib>
#include <Iostream>
using namespace std;
int i=0,n,j=0,nflag,hits;
bool ships [3][3];//array for battleship

void display() //used to display the battleship
{
	cout << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << ships[i][j] << " ";
		}
		cout << endl;
	}
}

int main ()
{
	cout << "welcome to battleship" << endl;
	cout << "you will face against a computer generated ship layout \n";
	srand((unsigned int)time(NULL));
	while (i < 3)
	{
		j = 0;
		while (j<3)
		{
			int n = rand() % 2 + 0;
			if (n == 1)
				nflag = nflag + 1;
			if (nflag > 3)
				n = 0;
			ships[i][j] = n;
			j++;
		}
		i++;
	}
	int tries = 0;
	while (hits < 3)
	{
		cout << "enter row number 0-3:     \n";
		cin >> i;
		cout << "enter coloumn number 0-3:    \n";
		cin >> j;
		if ((i >= 0) && (i <= 3) && (j >= 0) && (j <= 3))
		{
			if (ships[i][j])
			{
				cout << "HIT!!!\n";
				hits++;			
				cout << "total ships left:    " << 3 - hits << endl;
			}
			else
				cout << "MISS!!!\n";
			tries++;
		}
		else cout << "enter number in valid range\n";
	}
	display();
	system("pause");
	return 0;

}