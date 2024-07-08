
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
     #include<iomanip>
     using namespace std;
     
     
     //  In another method, we can have logic in a reverse way.
     
     int main()
     {

         float num,i;
         float result=0;
         double sq;
         cout<<"Enter number:";
         cin >> num;
         for( i=0.01;i*i<=num;i=i+0.01)
         {
             
         }
         
             if(num==0)
             {
                 cout<<"Square root of a given number is 0";
             }
             else if(num==1)
             {
                 cout<<"Square root of given number is 1";
             }
             else if(num<0)
             {
                 cout<<"Enter a positive number to find square root";
             }
             else
             {
                 std:: cout<< std:: fixed;
                 std:: cout<<std::setprecision(3);
                 cout<<"Square rot of the given number:"<<i<< endl;
                 
             }
         
         
       
            
         return 0;
     }
     

     
    /*
         The code seems short and simple:
         
            i) We are declaring our two values, a number which is taken as input and 
         one is our result.
         
         ii) Ask the user to input a number for which we need to write the square root.
         
         iii) For loop, we will initiate the i value to 0.01 as we need our results 
         to be in decimal points..
         
         iv) Then, we will execute that for a loop until the square of the i value is less than
         the user-inputted value.
         
         v)And we will increase the i value with 0.01 only, as we need decimal points,
         and we have to increase the i value proportionally as per the declaration.
         
         vi) If observed, we have kept a semicolon at the end of for loop, which makes the 
         loop run without executing any inner statements until the condition is satisfied.
         
         
    */

