
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
