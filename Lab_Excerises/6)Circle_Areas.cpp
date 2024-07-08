/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*
      Lab Exercises...
     
*/
 

#include <bits/stdc++.h>
#include<iomanip>
using namespace std;
    
         //Area Caluclation:
     
     int main()
     {
         float pi=3.14159, radius, area, difference, sumArea, largestCircle, smallestCircle;
         int i, n;
         
         largestCircle=INT_MIN;
         smallestCircle= INT_MAX;
         
         cout<<"Please enter the set size:";
         cin >> n;
         
         for(int i=0; i<n;i++)
         {
             cout<<"Please enter the radius of the circle:";
             cin>> radius;
             
             area= pi*radius*radius;
             cout<<"The area of the circle is:"<< area << endl;
             sumArea = sumArea+ area;
             
             if(area> largestCircle)
             {
                 largestCircle = area;
             }
             
             if(area< smallestCircle)
             {
                 smallestCircle = area;
             }
         }
         
         cout<<"The sum of all circle is: "<< sumArea << endl;
         cout<<"The largest circle is:"<< largestCircle << endl;
         cout<<"The smallest circle is:"<< smallestCircle << endl;
         difference = largestCircle-smallestCircle;
         cout<<"The difference between the smallestCircle and the largestCircle is:"<< difference << endl;
         
       
        return 0;
     }
     

