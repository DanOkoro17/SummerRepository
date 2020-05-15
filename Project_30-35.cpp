#include <iostream>
#include <string>

using namespace std;

int main()
{
    int action;
   string Entry_test;
    string append;
    int erase_index;
    int erase_amount;
    int replace_index;
    int replace_amount;
    string replace;
    cout << "Input some text for testing:" << endl;
    getline(cin, Entry_test);
    cout << "Text input comparison: " << endl << Entry_test << endl;
    cout << "The number of values entered: " << Entry_test.length() << endl;
    cout << "What action do you want to take?" << endl
        << "1.Erase some text" << endl
        << "2.replace some text" << endl;
    cin >> action;
 

    switch (action) {
  
    case 1: cout << "What is the erase index? (index of the variable the erase should start after.)";
        cin >> erase_index;
        cout << "What number of values should be erased?";
        cin >> erase_amount;
        Entry_test.erase(erase_index, erase_amount);
        cout << "The new text is: " << endl << Entry_test << endl;
        break;
    case 2: cout << "What is the replace index? (index of the variable the replace should begin)";
        cin >> replace_index;
        cout << "What number of values should be replaced?";
        cin >> replace_amount;
        cout << "Enter the replacement string?";
        cin >> replace;
        Entry_test.replace(replace_index, replace_amount, replace);
        cout << "The new text is: " << endl << Entry_test;
    }
   
    
}


