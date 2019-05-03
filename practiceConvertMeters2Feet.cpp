/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double meters;
    const double feetInMeter = 3.28;
    
    cout << "Enter the distance in meters you would like converted to feet? ";
    cin  >> meters;
    
    cout << "The distance in feet: " << meters * feetInMeter << endl;
    
    return 0;
}
