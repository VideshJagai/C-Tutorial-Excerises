
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
     
     for(i=n; i>=1;i--)
     {
         for(j=i;j<n;j++) 
         {
             cout<< " ";
         }
    
         
     for(int k=1;k<=i;k++) // Regular Inverted Star Pyramid..
     {
         cout<<"* ";
     }
        cout<< endl;
     
     }  
    return 0;
}

