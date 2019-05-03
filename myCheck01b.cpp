/***********************************************************************
 * Program:
 *    Checkpoint 01b, Review
 *    Brother Alvey, CS165
 * Author:
 *    L Shamane Wells
 * Summary:
 *    Summaries are not necessary for checkpoint assignments.
 * ***********************************************************************/

#include <iostream>
using namespace std;

int getSize();
void getList(int size, int list[]);
void displayMultiples(int size, int list[]);

/**********************************************************************
 * Function: Main
 * Purpose:  Call the functions and execute.
 ***********************************************************************/
int main()
{
    //Call the functions in order.
    int size = getSize();
    int list[20];
    getList(size, list);
    displayMultiples(size, list);
    
    return 0;
}

/**********************************************************************
 * Function: getSize
 * Purpose:  Prompts user for the list's size.
 ***********************************************************************/
int getSize()
{
    int size;
    cout << "Enter the size of the list: ";
    cin  >> size;
    
    return size;
}

/**********************************************************************
 * Function: getList
 * Purpose:  Accepts the list size, prompts user to fill list array.
 ***********************************************************************/
void getList(int size, int list[])
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number for index " << i << ": ";
        cin  >> list[i];
    }
    
    return;
}

/**********************************************************************
 * Function: displayMultiples
 * Purpose:  Prompts user for the list's size.
 ***********************************************************************/
void displayMultiples(int size, int list[])
{
    cout << "\nThe following are divisible by 3:\n";
    for (int i = 0; i < size; i++)
    {
        if (list[i] % 3 == 0)
        {
            cout << list[i] << endl;
        }
    }
    return;
}
