/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
      Lab Exercises...
     Sequence: 2,4,8,16,32
*/
 

#include <bits/stdc++.h>
#include<iomanip>
using namespace std;
    
     //bool isPerfect(int n);
     
     int main()
     {
         int num;
         bool isPerfect;
         int PerVal;
         
         cout<<"Please enter a value to check a Perfect number:"<< endl;
         cin>> num;
         
         isPerfect=false;
        for(int count=1; count<=num; count+=1)
        {
            if(count*count==num)
            {
                isPerfect=true;
                PerVal= count;
            }
        }
         

         if(isPerfect==true)
         {
             cout<<num <<"is a perfect square."<< endl;
             cout<< PerVal << " x "<< PerVal <<" = "<< num << endl;
         }
         else
         cout<<"This number:"<< num << " is not a perfect number."<< endl;

        return 0;
     }
     
    
     


