#include <iostream>
using namespace std;

int x,y,k,rem,rem2,i=0,flag=0;

int main()
{
	cout << "input x, y and k \n";
	cin >> x >> y >> k;
	while (x > 0)
	{
		while (y > 0)
		{
			rem = x % 10;
			x = x / 10;
			rem2 = y % 10;
			y = y / 10;



			if ((rem == rem2) && (i == k))
			{
				cout << "kth digit is the same";
				flag = 1;

			}

			i = i + 1;
		}
	}
		if (flag ==0)
			cout << "kth digit is not the same \n";


	system("pause");
	return 0;
}