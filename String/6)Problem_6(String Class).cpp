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

     // Examples of C++ Strings Class

#include<iostream>
#include<vector>
#include<list>
using namespace std;


int main()
{
     string trying_1="test";
     //string trying_2={"Test in another way"};
     string trying_2("Test in another way");
     cout<<"Printing the string data type value: " << trying_1 << endl;
     cout<<"Another print data: "<< trying_2;
     
     
     return 0;
}

    /*
         Using  the "getline" function , we can accordingly complete user-given input under
         such output.
         
    */

