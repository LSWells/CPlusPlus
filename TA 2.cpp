/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

/**********************************************************************
 * Data Struct: Scripture
 * Purpose: 3 members, a string for the book name, an integer for the 
 *          chapter, and an integer for the verse
 ***********************************************************************/
struct Scripture
{
    string book;
    int chapter;
    int verse;
};
 
/**********************************************************************
 * Function: promptScripture
 * Purpose: Prompts the user for book, chapter, verse, and assigns it to
 *          a new scripture. Pass to displayScripture
 ***********************************************************************/
void promptScripture(Scripture scripture[])
{
    //Pass the struct and an array into this function so that it will
    //all for multiple scriptures to be read in. 
    for(int i = 0; i < 3; i++)
    {
        cout << "Book: ";
        getline(cin, scripture[i].book); //captures line & assigns 
       
        cout << "Chapter: ";
        cin  >> scripture[i].chapter;
        
        cout << "Verse: ";
        cin  >> scripture[i].verse;
        cin.ignore(); //put at the end of the scope
    }
}
 
/**********************************************************************
 * Function: displayScripture
 * Purpose: Displays the scriptures on the screen.
 ***********************************************************************/
void displayScripture(const Scripture scripture[])
{
    //When reading an array into the function, you won't need an '&'
    for (int i = 0; i < 3; i++) //Use loop to go through the array
    {
        //Use struct to setup the display format.
        cout << scripture[i].book << " " 
             << scripture[i].chapter << ":"
             << scripture[i].verse << endl;
    }
}

/**********************************************************************
 * Data Struct: Insight
 * Purpose: 
 ***********************************************************************/
struct Insight
{
    string insight;
};
 
/**********************************************************************
 * Function: promptInsight
 * Purpose: 
 ***********************************************************************/
void promptInsight(Insight insight)
{
    //Pass the struct and an array into this function so that it will
    //all for multiple scriptures to be read in. 
        cout << "Insight: ";
        getline(cin, insight.insight); //captures line & assigns 
        cin.ignore(); //put at the end of the scope
}
 
/**********************************************************************
 * Function: displayInsight
 * Purpose: 
 ***********************************************************************/
void displayInsight(const Insight &insight)
{
    //When reading an array into the function, you won't need an '&'
    //Use struct to setup the display format.
    cout << insight.insight << endl;
}
 
/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
    //Call the Struct and array[3]
    Scripture scripture[3];
    
    //Call prompt and display functions.
    promptScripture(scripture);
    displayScripture(scripture);
    
    //Call the Insight Struct
    Insight insight;
    
    //Call prompt and display functions for Insights
    promptInsight(insight);
    displayInsight(insight);
    
    return 0;
}