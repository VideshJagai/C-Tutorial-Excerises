
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
     
    
     


