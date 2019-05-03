/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int array[10] = {5, 4, 7, 3, 5, 9, 8, 1, 3, 2};
   int sum = 0;

   for(int i = 0; i < 10; i++)
   {
      sum += array[i];
   }
   cout << sum;
   return 0;
}