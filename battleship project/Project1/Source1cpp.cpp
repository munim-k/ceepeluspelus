#include <iostream>
using namespace std;
int num;
int main()
{

	int a, b, fact = 1, i = 1, N;


	while (num != 5)
	{
		num = 0;
		cout << "1.Add\n";
		cout << "2.DIVIDE\n";
		cout << "3.magnitude\n";
		cout << "4.Factorial\n";
		cout << "press 5 to exit\n";
		cin >> num;
		if (num == 1)
		{
			cout << "you selected ADD\n";
			cout << "Enter number 1: ";
			cin >> a;
			cout << "Enter number 2: ";
			cin >> b;
			cout << "The result is: " << a + b << endl;
		}
		else if (num == 2)
		{
			cout << "you selected DIVISION\n";
			cout << "Enter number 1: ";
			cin >> a;
			cout << "Enter number 2: ";
			cin >> b;
			cout << "The result is: " << a / b << endl;
		}
		else if (num == 3)
		{
			cout << "you selected MAGNITUDE\n";
			cout << "Enter number 1: ";
			cin >> a;
			if (a > 0)
			{
				cout << "Magnitude is: " << a << endl;
			}
			else
			{
				cout << "Magnitude is: " << a * (-1) << endl;
			}
		}
		else if (num == 4)
		{
			cout << "you selected Factorial\n";
			cout << "enter number: ";
			cin >> N;
			i = N;
			while (i > 0)
			{
				fact = fact * i;
				i = i - 1;
			}
			cout << "Factorial is: " << fact << endl;
		}

		if (num == 5)
		{

			system("CLS");
			system("pause");

		}

		system("pause");
		system("CLS");
	}
	return 0;
}
