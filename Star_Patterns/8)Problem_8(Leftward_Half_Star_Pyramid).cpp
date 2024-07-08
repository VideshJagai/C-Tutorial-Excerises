
/*
      No variants of C++ to print a left-ward half-star pyramid pattern
    
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
    
         
     for(int k=1;k<=i;k++) // Regular Rightward Half-Star Pyramid..
     {
         cout<<"*";
     }
        cout<< endl;
     
     }
     
     for(int i=n; i>1; i--)
     {
         for(int j=i;j<=n;j++)
         {
             cout<<" ";
         }
         
         for(int k=1;k<i;k++)
         {
             cout<<"*";
         }
         cout<< endl;
     }
     
    return 0;
}

