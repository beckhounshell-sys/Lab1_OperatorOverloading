#include "MyTime.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int myInt;
    MyTime t1;
    MyTime t2;
    MyTime t3;

    string boolString;
    

    cin >> t1;
    cin >> t2;
    cout << "Enter an integer: ";
    cin >> myInt;

    // + operator
    t3 = t1 + t2;
    cout << "t1 + t2 = ";
    cout << t3 << endl;
    // - operator
    t3 = t1 - t2;
    cout << "t1 - t2 = ";
    cout << t3 << endl;
    // * operator
    t3 = t1 * myInt;
    cout << "t1 x " << myInt<< " = ";
    cout << t3 << endl;
    // / operator
    t3 = t1 / myInt;
    cout << "t1 / " << myInt<< " = ";
    cout << t3 << endl;
    // == operator
    bool t1t2equal = t1 == t2;
    if (t1t2equal == 1){
        boolString = "true";
    } else {
        boolString = "false";
    }
    cout << "t1 = t2 is " << boolString;

    
}