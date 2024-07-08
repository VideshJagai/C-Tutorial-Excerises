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

     // Take a condition without declaring the namespace.

#include<iostream>
#include<vector>
#include<list>
#include<cstring>
using namespace std;


int main()
{
     char r[10]="hello";
     char e[5]= "hi";
     
     cout<<"String r is equal to: "<< r << endl;
     cout<<"String e is equal to: "<< e << endl;
     
     strcat(r,e); // concatenating the both data string type variables as string insead of char 
     cout<<"The output here is: "<< r << endl;
     
     return 0;
}

    /*
         Using  the "getline" function , we can accordingly complete user-given input under
         such output.
         
    */

