
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
     
     for(i=n; i>=1;i--)
     {
         for(j=i;j<n;j++) // i)i=4, j=4 , ii) i=3, j=3<4{ increment 1}, iii)i=2, j=2<4{ increment by 2}
         {               // i=1, j=3{increment by 3}
             cout<<" ";
         }
         
     for(int k=1;k<=(2*i-1);k++)
     {
         cout<<"*";
     }
        cout<< endl;
     }
      
    return 0;
}
