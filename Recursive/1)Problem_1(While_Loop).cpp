/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
                        C++ Reverse Number in C++
    
     Logics of Reverse Number in C++.   
     
     Modulues (%) sign is used to find the reverse of the given number. The logic for a reverse
     number is as follows:
     
        1) Initialise a reverse number to 0.
        2) Multiply the reverse number by 10.
        3) Divide given number and find modulus.
        4) Add Modulus to the correpounding reverse number.
        5) Output step four.
        6) Divide the given number by 10 respectively.
        7) Repeat the step from 2 t0 6 until the output comes accordingly..
         

*/

     // Find Reverse Number in C++ Using While Loop

#include<iostream>
#include<vector>
#include<list>
#include<cstring>
using namespace std;


int main()
{
     int number, reverse_number=0;
     cout<<"Enter a number to reverse value: ";
     cin>> number;
     
     while(number!=0)
     {
         reverse_number = reverse_number*10;
         reverse_number = reverse_number+ number%10;
         number = number/10;
     }
         cout<<"Reverse of entered number: "<< endl;
         cout<< reverse_number;
        
     return 0;
}
    /*

         Using  the "getline" function , we can accordingly complete user-given input under
         such output.
         
    */

