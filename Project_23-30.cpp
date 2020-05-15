#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    double budget = 150;
    double height;
    double width;
    double length;
    

    cout << "Your budget is: " << budget << "$" << endl;
    cout << "Enter wall height (feet): ";
    cin >> height;
    cout << "Enter wall width (feet): ";
    cin >> width;
    cout << "Enter wall length (feet): ";  
    cin >> length;
    double area = (width * length) + (height * width) + (length * height);
    cout << "Wall area: "; printf("%.2f", area); cout << " square feet" << endl;
    double amount_paint = area / 150;
    cout << "Amount of paint needed: ";printf("%.2f", amount_paint);cout << " L"<<endl;
    double cans = amount_paint / 3.7;
    double round_cans = round(cans);
    cout << "Number of paint cans needed: " <<round_cans << " cans"<<endl;
    double cost = round_cans * 50;
    cout << "Paint cost: " << cost << "$"<<endl;
    double coat_1 = budget - cost;
    double coat_2 = budget -(cost * 2);
    double coat_3 = budget - (cost * 3);
    cout << "The price for 1 coat of paint: " << coat_1<<"$"<<endl;
    cout << "The price for 2 coat of paint: " << coat_2 << "$"<<endl;
    cout << "The price for 3 coat of paint: " << coat_3 << "$"<<endl;
}

