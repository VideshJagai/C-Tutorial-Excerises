
/*
      Lab Exercises...
     E.g: Apple Purchases..
*/
 

#include <bits/stdc++.h>
#include<iomanip>
using namespace std;


     int main()
     {
   
      double OrigCostOfShares = 174.21;
      double newCostOfShares = 225.00;
      double money;
      int numShares;
      double originalWorth;
      double newWorth;
      double increase;

     double lower, upper;
     
     cout<<"Please enter the lower and upper amount of money to be invested:";
     cin>> lower;
     cin>> upper;
     
     cout<< fixed << setprecision(2);
     
     cout<<"Inital Investment       Number of Shares Purchased      Net Gain/Loss"<< endl;
     cout<<"================.       ==========================      ============="<< endl;
     
     for (money=lower;money<=upper; money+=1000)
     {
         
         numShares = floor(money/OrigCostOfShares);
         originalWorth = numShares * OrigCostOfShares;
         newWorth = numShares * newCostOfShares;
         increase = newWorth - originalWorth;
        
        cout<< money << "\t\t\t\t" << numShares <<"\t\t\t\t"<< increase << endl;
     }
     
     
     
    return 0;
}

