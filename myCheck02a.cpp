/***********************************************************************
* Program:
*    Checkpoint 02a, Structs
*    Brother Alvey, CS165
* Author:
*    L Shamane Wells
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Data Struct: Complex
 * Purpose: Setup the struct to capture info. Follow syntax order.
 ***********************************************************************/
struct Complex
{
    // Use struct syntax. Set variables to double
    double real;
    double imaginary;
    
};  //Don't forget the SEMICOLON!

/**********************************************************************
 * Function: prompt
 * Purpose: prompt the user for real and imaginary numbers then return.
 ***********************************************************************/
Complex prompt()
{
    //Declare variables. Then prompt, assign, and return back to struct
    Complex number;
    
    cout << "Real: ";      //Remember you don't need a \n
    cin  >> number.real;
    
    cout << "Imaginary: ";
    cin  >> number.imaginary;
    
    return number;
}

/**********************************************************************
 * Function: displayComplex
 * Purpose: Accepts a Complex struct and displays it in the format
 [REAL] + [IMAGINARY]i
 ***********************************************************************/
void displayComplex(Complex number)
{
    // Setup scope so any variables will be in this set format
    cout << number.real << " + "
    << number.imaginary << "i";
    
    return;
}

/**********************************************************************
 * Function: addComplex
 * Purpose: Adds two complex numbers together and returns the sum.
 ***********************************************************************/
Complex addComplex(const Complex & x, const Complex & y) //USE CONST
{
    // Declare variable.
    Complex sum;
    
    // Add the real numbers and assign it to a variable (use x, y).
    sum.real = x.real + y.real;
    sum.imaginary = x.imaginary + y.imaginary;
    
    return sum;
}

/**********************************************************************
 * Function: MAIN
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
    // Declare two Complex objects, c1 and c2
    Complex sum, c1, c2;
    
    // Call your prompt function twice to fill in c1, and c2
    c1 = prompt();
    c2 = prompt();
    
    // Declare another Complex for the sum. INSERT Complex objects.
    sum = addComplex(c1, c2);
    
    cout << "\nThe sum is: ";
    
    displayComplex(sum);
    cout << endl;
    
    return 0;
}
