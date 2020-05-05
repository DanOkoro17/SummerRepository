#include <iostream>
#include <cmath>
#include <float.h>
#include <cstdlib>
using namespace std;
int main()
{
	int user_ans;
	long double Pow;
	long double Remainder;
	long double Sqrt;
	int Random;
	bool repeat = 1;
	while ( repeat ==1)
	{
		cout << "Type the number of the Numeric function you want to use?" << endl
			 << "1.Power" << endl
			 << "2.Remainder division" << endl
			 << "3.Square root" << endl
			 << "4.Generate a random Number" << endl;
		cin >> user_ans;

		switch (user_ans)
		{
			case 1:
				double base;
				double power;
				cout << "Enter the base: ";
				cin >> base;
				cout << "Enter the power: ";
				cin >> power;
				Pow = pow(base, power);
				cout << base << " to the power of " << power << " is " << Pow;
			break;

			case 2:
				double dividend;
				double divider;
				cout << "Enter the dividend: ";
				cin >> dividend;
				cout << "Enter the divider: ";
				cin >> divider;
				Remainder = remainder(dividend, divider);
				cout << "The remainder when " << dividend << " is divided by " << divider << " is " << Remainder;
			break;

			case 3:
				double x;
				cout << "Number whose square root is to be taken: ";
				cin >> x;
				Sqrt = sqrt(x);
				cout << "The square root of " << x << " is " << Sqrt;
			break;
			case 4:
				Random = rand();
				cout << "The random number generated is " << Random;
			break;
		}
		cout << endl << endl
			<< "Do you want to repeat this program?" << endl
			<< "For yes enter 1 and for no enter 0:" << endl;
			cin >> repeat;
	}
}