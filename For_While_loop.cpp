#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    long int num_limit;
    long int count=0;
    long int natural=0;
    long int sum=0;
    cout << "How many natural numbers do you want :" << endl;
    cin >> num_limit;
    cout << "The natural numbers are: " << endl;
    while (count < num_limit)
    {
        natural = natural + 1;
        sum += natural;
        cout << natural<<" ";
        
        count++;
        
    }
    cout << "" << endl;
    cout << "The sum of all these numbers is: " << sum<<endl<<endl;


    int i, forsum = 0,for_limit;
    cout << "How many natural numbers do you want :"<<endl;
    cin >> for_limit;
    cout << " The natural numbers are: "<<endl;
    for (i = 1; i <= for_limit; i++)
    {
        cout << i << " ";
        forsum = forsum + i;
    }
    cout << "\n The sum of first 10 natural numbers: " << sum << endl;

}

