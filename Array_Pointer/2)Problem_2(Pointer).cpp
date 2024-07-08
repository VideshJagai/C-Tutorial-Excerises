/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
     Introduction to C++ Length of Array.
     
     The basic syntax used to find the length of an array in C++.
     
     int array[]={1,2,3,4,5,6};
     int arraySize= sizeof(array)/sizeof(array[0]);
     
     With the Help of Pointers:
*/         


#include <iostream>
using namespace std;

int main()
{
    
int EDUcba[10]={0,9,1,8,2,7,3,6,4,5};
int stretch = *(&EDUcba+1) -EDUcba;

cout<<"Array is consist of:"<< stretch << "numbers"<< endl;
cout<<"Hence the size:"<< stretch << endl;
cout<< EDUcba<< endl; // starting address of the array..
cout<< *(&EDUcba+1) << endl; // contain the address of the after the proceeding ten elements
    

    return 0;
}

/*
    By using an array of pointers, manipulate our array bacause they are very bound in 
    nature.We just in need to access the elements by using the address of the elements.
    

*/



