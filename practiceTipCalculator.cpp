/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int people;
    float bill, tip, totalTip, totalBill;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "How much is the bill? ";
    cin  >> bill;
    
    cout << "What percent of a tip would you like leave? ";
    cin  >> tip;
    
    totalTip = bill * (tip / 100);
    totalBill = bill + totalTip;
    
    cout << "For a " << tip << "% tip, the tip would be $" << totalTip << ". \n";
    cout << "The total bill is $" << totalBill << ". \n";
    
    return 0;
}
