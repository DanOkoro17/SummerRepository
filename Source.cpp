#include <iostream>
#include <stdio.h>

using namespace std;
int main() 
{
	signed int integer = -24;
	unsigned int uinteger = 43;
	float float_num = 2.345;
	bool Boolean = true;
	char bit_8 = 'D';

	cout << "The size of an integer in bytes is " << sizeof(int)<<endl
		 << "An example of a signed integer is "<<integer<<endl
		 << "An example of an unsigned integer is "<<uinteger<<endl;
	cout << "The size of a float in bytes is " << sizeof(float) << endl
		 << "An example of a float is "<<float_num<<endl;
	cout << "The size of a bool in bytes is " << sizeof(bool) << endl
		 << "An example of a bool is " << Boolean << endl;
	cout << "The size of a char in bytes is "<<sizeof(char)<<endl
		 << "An example of a char is "<<bit_8<<endl;


}