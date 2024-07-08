
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

#include<iostream>
#include<vector>
#include<list>
using namespace std;


int main()
{
     string ex1="example1";
     string ex2[]={"example2"};
     char ex3[]="example3";
     
     cout<<"The first example:"<< ex1 << endl;
     cout<<"The second example:"<< ex2 << endl;
     cout <<"The third example:"<< ex3 << endl;
     
     
     return 0;
}

