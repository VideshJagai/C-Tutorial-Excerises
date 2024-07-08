/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
                     Introduction to Square Root in C++
    
     Well-known mathematical calculations, Square Root, C++ programming 
     to determine the square root of a given number. 
         
         
     Logic of Square Root in C ++:
     
      To have our square root function, we need to understand the proper 
      logic of how this square root is calculated.
      
      There are many methods to understand the logic but we have to start from the 
      basic level:
      
         We know the square of a number 2, in same way, sqaure root of a number would consequentlly
         be the power of 1/2. We can utilise a pow function under alignment of h package
         library for this.
         
*/
     
     
     #include<iostream>
     #include<vector>
     #include<list>
     #include<math.h>
     #include<cstring>
     using namespace std;
     
     
     //  In another method, we can have logic in a reverse way.
     
     int main()
     {

         int num;
         float result=0;
         double sq;
         cout<<"Enter number:";
         cin >> num;
         sq = result * result;
         
         while(sq<num)
         {
             result = result+1;
             sq=result*result;
             
             if(num==sq)
             {
                 cout<<result<< endl;
                 break;
             }
         }
         
         cout<< "Square root lies between "<< result-1 << "and"<< result;
         return 0;
     }
     

 

     /*
         
         
     */
 
     
     
    /*
            
         
         
    */

