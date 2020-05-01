#include<iostream>
using namespace std;

int main()
{
	int courses;
	string gender;
	string firstname;
	string lastname;
	int age;

	cout << "What is your first name? ";
	cin >> firstname;
	cout << "What is your last name? ";
	cin >> lastname;
	cout << "How old are you? ";
	cin >> age;
	cout << "Are you Male or Female? ";
	cin >> gender;
	cout << "How many courses do you do: ";
	cin >> courses;

	cout <<""<<endl 
		 << "Name: " << firstname << " "<< lastname << endl
		 << "Age: " << age << endl
		 << "Gender: " << gender << endl
		 << "No of courses: " << courses << endl;

}