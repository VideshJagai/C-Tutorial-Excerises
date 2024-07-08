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
    // How to sort in a particular order? 
    /*
          Suppose intervals {6,8} and {1,9} are passed as arguments in the
          “compareInterval” function(comparator function)
    */

#include <bits/stdc++.h>
using namespace std;
     
     
     struct Interval{
         int start, end;
     };
     
     
     bool CompareInterval(Interval v1, Interval v2)
    {
        //return ( v1.start < v2.start);
        if (v1.start>v2.start)
        return false;
       
    }


int main()
{
        Interval arr[]= {{ 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 }};
    
    int len = sizeof(arr)/sizeof(arr[0]);
    
    // sort the intervals in increasing order of
    // start time
    
     sort(arr, arr+len, CompareInterval); // output the following range of values between i>=2, i<=9
    
    
       cout << "\nArray after sorting using "
            "default sort is : \n";
    for (int i = 0; i < len; ++i)
        {
           cout << "["<<arr[i].start <<","<< arr[i].end << "]"<<endl;
           
        }
        
    cout<< endl;
    
    //cout<< arr+len<< endl; address of array 10th  position from its preoccupied 
    //storage arr[0-9] positions respectively,
     
    return 0;
}
