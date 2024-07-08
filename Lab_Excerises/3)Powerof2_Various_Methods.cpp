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
    int Power2(int n);
    
     int main()
     {
         
         int num;
         cout<<"Please enter the number to genrate the sequence mutlciples of 2";
         cin>> num;
         Power2(num);
     /*
     for(int count=2;count<=1024; count*=2)
     {
         cout<< count << " " << endl;
     }
     */
        return 0;
     }
     
     int Power2(int n)
     {
         int count=2;
         while(count<=n)
         {
             cout<<count<< " "<< endl;
             count*=2;
         }
     }
     


