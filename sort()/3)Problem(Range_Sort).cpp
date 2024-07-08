/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
    std::sort(): This generally accepts two paramters, first one being the point of the
    array/vector from where the sorting need to begin and the second paramter being the 
    length up to which we want the array/vector to get sorted.

     How to sort in descending order? 
     
     Sort(), accpets the third paramter that is used to specify the order in 
     which elements are to be sorted. We can pass the "greater()" function to sort
     descending order.

*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={0, 1, 5, 8, 9, 6, 7, 3, 4, 2};
    
    int len = sizeof(arr)/sizeof(arr[0]);
    
       /*Here we take two parameters, the beginning of the
    array and the length n upto which we want the array to
    be sorted*/
    
     sort(arr+5, arr+len); // output the following range of values between i>=2, i<=9
    
    
       cout << "\nArray after sorting using "
            "default sort is : \n";
    for (int i = 0; i < len; ++i)
        {
           cout << arr[i] << " ";
           
        }
        
    cout<< endl;
    
    //cout<< arr+len<< endl; address of array 10th  position from its preoccupied 
    //storage arr[0-9] positions respectively,
     
    return 0;
}
