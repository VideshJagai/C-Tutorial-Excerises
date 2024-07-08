/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
     Program in C++ to print an inverted half-star pyramid pattern
    
*/
 

#include <bits/stdc++.h>
using namespace std;

     

     int main()
     {
        int i, j, n;    
      cout<<"Enter the number of rows:";
      cin >> n;
     
      for(i=n;i>0;i--)
      {
          for (j=1;j<=i;j++)
          {
              cout<<"*";
          }
          cout<< endl;
      }
      
    return 0;
}
