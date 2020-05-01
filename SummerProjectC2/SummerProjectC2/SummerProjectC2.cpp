#include <iostream>
using namespace std;

double power(double base,double exponent)
{
	//a custom function to calculate the power of a base 
	double result = 1;
		for(int i = 0; i<exponent;i++)
		{
			result = result * base;
		}
	return result;
}

void print_result(double base, double exponent)
{	
	/*
		A void function to help print the
		result of the  power functions calculation.
		Power function is called here. 
	*/
	double result = power(base, exponent);
	cout << base << " the power of " << exponent << " is " << result;
}

int main()
{
	//main function that calls the print_result function
	double base, exponent;
	cout << "What is the base?" <<endl;
	cin >> base;
	cout << "What is the exponent?" << endl;
	cin >> exponent;
	print_result(base, exponent);
}