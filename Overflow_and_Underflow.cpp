// This program demonstrates inter overflow and underflow.

#include <iostream>
using namespace std;

int main()
{
    // testVar is initialized with the maximum value for a short.
    short testVar = 32767;

    // Display testVar.
    cout << testVar << endl;

    // Add 1 to testVar to make it overflow.
    testVar = testVar + 1;
    cout << testVar << endl;

}
