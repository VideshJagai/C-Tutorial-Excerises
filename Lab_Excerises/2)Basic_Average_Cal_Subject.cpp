
/*
      Lab Exercises...
     E.g: Basic Average Purchases E..
*/
 

#include <bits/stdc++.h>
#include<iomanip>
using namespace std;


     int main()
     {
      int n, count;
      float avg=0, mark=0, sumMark=0;
        
        cout<<"Enter number of courses";
        cin >> n;
     
     for(count=1; count<=n; count+=1)
     {
         cout<<"The course mark of each distinctive subject course:"<< endl;
         cin>> mark;
         sumMark+=mark;
         
     }
     
     avg = sumMark/n;
     
     cout<< avg<< endl;
     
    return 0;
}

