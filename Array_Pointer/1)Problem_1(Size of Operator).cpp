
/*
     Introduction to C++ array of pointer:
     
     -> The array is something that hold the list of elements, and pointers are 
     something that hols the address the variable.
     
     -> So an array of pointers represents an array that holds the address of the elements
     which  presented inside the array. 
     
     -> This array of pointers is required when we want to manipulate easy for us beacuse 
     the array is very bound in nature, 
     
     -> This array of the pointer will contain the address of each element present in 
     the array.
     
     -> The array of pointers hold the memory address of the array elements.
     
     Syntax:
     If we want to declare an array of the pointer, then we have to generate the array that will
     hold the adddress of the other elements, which point to some value for that value that address.
     
            
         type *name_of_pointer[size_of_Array];
         i)  Definition of the type of the array pointer; 
         ii) Definition the name of our pointer by denotation of '*'.
         iii) Definition the size of the array for the quantity of element holding
         
           int *myptr[10] 
           
            i) we are declaring an array of pointers which can hold 10 elements for us.This array will hold the 
             address of the elements.
            
            ii) The address of the element, we have the ‘&’ keyword in c++, we can get the address of the element.
            
            iii) Always address is referred to as the memory address of the element. 
            
            iv)This memory address will turn point to the element which is stored at 
            this location.
        
                e.g. : int myarray[5] = {20,40,60,80,100}
                 
                 Note:
                    int *myptr [5]; // this holds the address of the elements of the array.
                    
                             
*/         





#include <iostream>

int main()
{
     std::cout<<"Demo to showcase array of pointer!!!\n";
     int myarray[5] = {100,200, 300, 400,500};
     int *myptr[5];
    
    std::cout<<"Value of array: ";
    for(int i=0;i<5;i++)
    {
        std:: cout<< myarray[i] <<std:: endl;
    }
    
    myptr[0]=&myarray[0];
    myptr[1]=&myarray[1];
    myptr[2]=&myarray[2];
    myptr[3]=&myarray[3];
    myptr[4]=&myarray[4];
    
    
    std::cout<<"Value of array of pointers!!\n";
    for(int i =0;i<5;i++)
    {
        std::cout<< *myptr[i] <<std::endl;
    }
    return 0;
}

/*
    By using an array of pointers, manipulate our array bacause they are very bound in 
    nature.We just in need to access the elements by using the address of the elements.
    

*/



