

/*
      Lab Exercises...
     
*/
 

#include <bits/stdc++.h>
#include<iomanip>
using namespace std;
    
         //Area Caluclation:
     
     int main()
     {
        int gb;
        float cost;
        
        cout<<"Please enter the data usage in GB";
        cin >> gb;
        
        if(gb<=500)
        {
            cost =(gb*0.15)+15;
        }
        else
         {
            if(gb<=1000)
        {
           cost = (500*0.75)+((gb-500)*1.15)+15; 
        }
        else
        {
            cost= (500*0.75)+(500*1.15)+ ((gb-1000)*1.25)+15;
        }
      } 
      
        cout<<"Cost: $" << cost << endl;
        return 0;
     }
     

