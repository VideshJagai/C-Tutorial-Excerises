/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
                     Introduction with Palindrome Program in C++
            
     A palindrome is a result that gives the same value after reversing the original value. The 
     logic behind palindrome is as simple as it sounds. 
     
     For example, MOM if you determine the reverse of MOM wil generate the same i.e. Hence
     MOM is palindrome.
         
     Some examples of the palindrome are such:
         
         i) 78987: the reverse is 78987, so it is a palindrome.
         ii) LOL: Reverse is LOL, so it is a palindrome.
         iii) 56425: Reverse is 52465, so it is not a palindrome.
         iv) fare: Reverse is era, so it is not a palindrome.
    
     The algorithm to test Palindrome in C++ program is given as below:
     i) Get an input form the user.
     ii) Store that input value in a temporary variable.
     iii) Find the reverse of the input value.
     iv) Compare both values’ reverse and temporary variables.
     
         
*/
     
     // How to Check the Palindrome in the C++ Program?
     
     #include<iostream>
     #include<vector>
     #include<list>
     #include<cstring>
     using namespace std;
     
     // Example #1: Program to check Palindrome in C++ using a while loop
     int main()
     {
         
          int num, temp_num, reverse_num=0 ;
         cout<<"Enter random number to check palindrome value: "<< endl;
         cin >> num;
         temp_num = num;
         while(num!=0)
         {
             reverse_num = reverse_num*10;
             reverse_num = reverse_num+ num%10;
             num= num/10;
         }
         
             if(temp_num== reverse_num)
             {
                 cout<<"The provide number is Palindrome ";
             }
             else
             {
                 cout<<"The provided number is not Palindrome";
             }
              
         return 0;
     }
     

     

     
     
 
     
     
    /*
            
         
         
    */

