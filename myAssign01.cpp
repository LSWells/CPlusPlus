/***********************************************************************        
* Program:                                                                      
*    Assignment 01, Genetic Genealogy                                           
*    Brother Alvey, CS165                                                       
* Author:                                                                       
*    L Shamane Wells                                                            
* Summary:                                                                      
*    Write a program that will prompt user for 10 character DNA marker          
*    sequence and a number of potential relatives, names of relatives,          
*    and DNA marker for each relative. THEN display the percentage              
*    of the squence matched.                                                                                                               
************************************************************************/

#include <iostream>
#include <string>
using namespace std;

//Stub out functions instead of prototypes
const int MAX_COUNT = 50;

/**********************************************************************         
 * Function: promptRelativesNames
 * Purpose:  Prompt user for relatives names & store in array. 
 ***********************************************************************/
void promptRelativesNames(string nameList[], int count)
{
    for(int i = 0; i < count; i++)
    {
        cout << "Please enter the name of relative #" << i + 1 << ": ";
        cin  >> nameList[i];
    }
}

/**********************************************************************         
 * Function: promptRelativesDna
 * Purpose:  Prompt user for relatives DNA & store in array. 
 ***********************************************************************/
void promptRelativesDna(string nameList[], string dnaList[], int count)
{
    for(int i = 0; i < count; i++)
    {
        cout << "Please enter the DNA sequence for "; 
        cout << nameList[i];
        cout << ": ";
        cin  >> dnaList[i];
    }
}

/**********************************************************************         
 * Function: double computeMatch
 * Purpose:  Compares the DNA strings and computes the match. 
 ***********************************************************************/
double computeMatch(string userDna, string dnaList[], int count)
{
    //Assign variables
    int percent = 0;
    
    //FOR LOOP, Continue until you reach the count of relatives.
    //NESTED FOR LOOP, Continue until you reach 10 (# of DNA sequence)
    //IF STATEMENT, if comparison is a match +10 to the percent variable
    for(int i = 0; i < count; i++)
    {
        for(int j = 0; j < 10; j++)        
        {
            if(toupper(userDna[j]) == (toupper(dnaList[i][j])))
            {
                percent += 10;
            }
        }
    }
    return;
}

/**********************************************************************         
 * Function: displayMatchPercent
 * Purpose:  Displays the results of the match comparison. 
 ***********************************************************************/
void displayMatchPercent(string userDna, string nameList[], string dnaList[], 
     int count)
{
    for(int i = 0; i < count; i++)
    {
        int percent = computeMatch(userDna, dnaList[i]);
        cout << "Percent match for " << nameList[i] << ": " << percent << "%\n";
    }
}
/**********************************************************************         
 * Function: MAIN
 * Purpose:  Driver for program that declares the variables and prompts. 
 ***********************************************************************/
int main()
{
   string nameList[MAX_COUNT];
   string dnaList[MAX_COUNT];

   string userDna;
   cout << "Enter your DNA sequence: ";
   cin  >> userDna;

   int count;
   cout << "Enter the number of potential relatives: ";
   cin  >> count;
   cout << endl;

   promptRelativesNames(nameList, count);
   cout << endl;
   promptRelativesDna(nameList, dnaList, count);
   cout << endl;
   displayMatchPercent(userDna, nameList, dnaList, count);
   
   return 0;
}
