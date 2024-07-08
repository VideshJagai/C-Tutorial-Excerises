/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
      No variants of C++ to print an inverted half-star pyramid pattern
    
*/
 

#include <bits/stdc++.h>
using namespace std;


     int main()
     {
        int i, j, n;    
      cout<<"Enter the number of rows:";
      cin >> n;
     
     for(i=1; i<=n;i++)
     {
         for(j=n;j>i;j--) 
         {
             cout<< " ";
         }
    
         
     for(int k=1;k<=i;k++) // Regular Star Pyramid..
     {
         cout<<"* ";
     }
        cout<< endl;
     
     }  
    return 0;
}

