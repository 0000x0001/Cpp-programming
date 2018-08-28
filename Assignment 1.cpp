//
// Assignment1.cpp
//
// WenLong Wu
// 8/27/2018
// Assignment1
// Convert a distance given in miles plus additional feet into kilometers
//

#include <iostream>
using namespace std;

int main()
{   // assigning variables
    int Mile;
    double Feet, Kilometer;
    // input & display
    cout << "Enter miles: ";
    cin >> Mile;
    cout << "Enter feet: ";
    cin >> Feet;
    // calculation
    Kilometer=((Mile*5280)+Feet)*0.0003048;
    // display answer
    cout << Mile << " miles and " << Feet << " feet is "
    << Kilometer << " kilometers." << endl;
    // end of the program
    return 0;
}
