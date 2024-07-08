/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
     Self-Defined Sizeof:
     
     -> Length of an array, we can also define our own function of the size and we can then 
     use it to find the length of the array.
     
     -> We have defined “measure_length” which works in the same way as 
     the size_of operator
     
*/         

// findig size of array using measure_length
// function defined in place of sizeof...

#include <bits/stdc++.h>
using namespace std;

# define measure_length(type) ((int*)(&type+1)-(int*)(&type))

int main()
{
    

int eduCBA[] = {0, 9, 1, 8, 2, 7, 3, 6, 4, 5};
int stretch = measure_length(eduCBA)/measure_length(eduCBA[0]);
cout << "The total members in the array are: " << stretch << endl;
cout << "Hence, Length of Array is: " << stretch;

    return 0;
}

/*
    By using an array of pointers, manipulate our array bacause they are very bound in 
    nature.We just in need to access the elements by using the address of the elements.
    

*/



