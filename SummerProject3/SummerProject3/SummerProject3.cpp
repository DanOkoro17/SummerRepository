#include <iostream>
#include<climits>

using namespace std;

int main()
{
    int x;
    int limit;
    int sign;
    cout << "There are various integral data types excluding int with various limits." << endl
        << "1.short" << endl
        << "2.long" << endl
        << "3.long long" << endl;
    cout << "Insert the number of the data type you want to know the limit of?" << endl;
    cin >> x;
    cout << "Is the data type signed or unsigned?" << endl << "Enter 0 for signed and 1 for unsigned." << endl;
    cin >> sign;
    cout << "Would you like to know the MAX or MIN limit?"<<endl<<"Enter 0 MAX and 1 MIN."<<endl;
    cin >> limit;
    switch(x)
    {
        case 1:
            if (sign==0)
            {
                if (limit==0)
                {
                    cout << "The max value of signed short is " << SHRT_MAX << endl;
                }
                else 
                {
                    cout << "The min value of signed short is " << SHRT_MIN << endl;
                }
            }
            else 
            {
                if (limit == 0)
                {
                    cout << "The max value of unsigned short is " << USHRT_MAX << endl;
                }
                else
                {
                    cout << "The min value of unsigned short is " << "0" << endl;
                }

            }
        case 2:
            if (sign == 0)
            {
                if (limit == 0)
                {
                    cout << "The max value of signed long is " << LONG_MAX << endl;
                }
                else
                {
                    cout << "The min value of signed long is " << LONG_MIN << endl;
                }
            }
            else
            {
                if (limit == 0)
                {
                    cout << "The max value of unsigned long is " << ULONG_MAX << endl;
                }
                else
                {
                    cout << "The min value of unsigned long is " << "0" << endl;
                }

            }
        case 3:
            if (sign == 0)
            {
                if (limit == 0)
                {
                    cout << "The max value of signed long long is " << LLONG_MAX << endl;
                }
                else
                {
                    cout << "The min value of signed long long is " << LLONG_MIN << endl;
                }
            }
            else
            {
                if (limit == 0)
                {
                    cout << "The max value of unsigned long long is " << ULLONG_MAX << endl;
                }
                else
                {
                    cout << "The min value of unsigned long long is " << "0" << endl;
                }

            }
    }
}