/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
                        C++ String.
     Introduction to C++ String.
     
     A string is a library function in C++ that assists in execution all the string 
     related operations in the program .
     
     A 'string' data type is assigned to a variable contaning characters surrounded by 
     double quotations.
     
     Any continous characters assigned to variable are referred as String Variable.
     
         Syntax:
         
         Below is the syntax for the string data type:
         
                string(data type) trying (variable) = "Test" (Value assigned to the variable)
                
             

*/

     // let us see how we can change the character in the string given.
#include<iostream>
#include<vector>
#include<list>
using namespace std;


int main()
{
     string r;
     cout<<"Enter any string of your choice:";
     getline(cin, r);
     cout<<"The output here is:"<< r << endl;
     
     
     
     return 0;
}

    /*
         Using  the "getline" function , we can accordingly complete user-given input under
         such output.
         
    */

