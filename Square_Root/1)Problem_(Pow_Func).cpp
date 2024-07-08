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
     
    
 
     // 
     int main()
     {

         int num;
         float result;
         cout<<"Enter number:";
         cin >> num;
         result= pow(num,0.5);
         cout<<"Square root of given number:"<< result<< endl;
         
         
         return 0;
     }
     

 

     /*
         
         
     */
 
     
     
    /*
            
         
         
    */

