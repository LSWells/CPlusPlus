/**********************************************************************
 * Program: ACME Widget Corporation just experienced their first
 *          digital security breach. One of their secret widget designs
 *          just appeared on the Internet. Now they've hired you as a
 *          digital forensics investigator to help determine what
 *          additional data might have been involved in the breach.
 *          One of the first steps in digital forensics is to inspect
 *          system logs, particularly file access and user account logs.
 *          To assist you in this investigation, you've been given a log
 *          from ACME's network server that contains a list of file
 *          access times and the users that accessed them.
 ***********************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

/**********************************************************************
 * Data Struct: Record
 * Purpose: Captures filename, username, and timestamp.
 ***********************************************************************/
struct Record
{
    //setup the struct
    string filename;
    string username;
    long timestamp;
};

/**********************************************************************
 * Function: getFilename
 * Purpose: Prompts the user for the file
 ***********************************************************************/
void getFilename(string &filename)
{
    //Prompt and assign variable
    cout << "Enter the access record file: ";
    cin  >> filename;
    
    return;
}

/**********************************************************************
 * Function: readFile
 * Purpose: Reads the file and assign to Record records array
 ***********************************************************************/
int readFile(Record records[], string &filename)
{
    //Open and check file. Use an IF statement if there's an error
    ifstream fin(filename.c_str());
    
    if (fin.fail())
    {
        cout << "Error occurred while reading file.\n";
        return -1;
    }
    
    //Declare variable for the WHILE LOOP. WHILE assign  DO
    int i = 0;
    while (fin >> records[i].filename >> records[i].username >> records[i].timestamp)
    {
        i++;
    }
    //Come outside the while loop scope and close the file
    fin.close();
    
    return i;
}

/**********************************************************************
 * Function: displayRecord
 * Purpose: Displays the record info in the format selected
 ***********************************************************************/
void displayRecord(Record record)
{
    //setup the format
    cout << setw(15) << record.timestamp
    << setw(20) << record.filename
    << setw(20) << record.username << endl;
    
    return;
}

/**********************************************************************
 * Function: searchRecords
 * Purpose:
 ***********************************************************************/
void searchRecords(Record records[], int numRecords)
{
    //declare variables
    long startTime = 0;
    long endTime = 0;
    
    //prompt user for time and assign
    cout << "\nEnter the start time: ";
    cin  >> startTime;
    
    //prompt user for time and assign
    cout << "Enter the end time: ";
    cin  >> endTime;
    
    //display result message and table header
    cout << "\nThe following records match your criteria:\n\n";
    cout << "      Timestamp                File                User" << endl;
    cout << "--------------- ------------------- -------------------" << endl;
    
    //FOR Loop
    
    for (int i = 0; i < numRecords; i++)
    {
        if (records[i].timestamp >= startTime && records[i].timestamp <= endTime)
        {
            displayRecord(records[i]);
        }
    }
    
    //move out of the loop scope and display end
    cout << "End of records" << endl;
    
    return;}

/**********************************************************************
 * Function: MAIN
 * Purpose: Driver program that does all the magic.
 ***********************************************************************/
int main()
{
    //Declare variables
    Record records[500];
    string filename = "";
    int numRecords;
    
    //Call functions
    getFilename(filename);
    numRecords = readFile(records, filename);
    searchRecords(records, numRecords);
    
    return 0;
}
