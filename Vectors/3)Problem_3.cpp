
/*

     Definition of C++ vector insert:
     
     => The C++ vector insert() is one of the functions used to insert the elements into the vector-based
     containers. 
     
     => Additionally it also extended by inserting the new elements pointed at some specified positions 
     wherever we want to insert the elements. 
     
     => Also the container size is increased automatically while inserting the new elements 
     in the container.
     
     => So it also automatically reallocates the storage space areas based upon the actual vector capacity.
     
     => Furthermore the vector also relocates the elements by using the positions it will handle 
     both the old and current positions sometimes.
     
     
     Syntax:
     In C++ each object, variables, keywords, and functions have their own syntax and attributes 
     for declaring in the programming codes:
     
     
        #include<iostream>
        #include<vector>
        
        data type main()
        {
            std:: vector<data type> object name size declaration;
            objectname.insert(parameters);
            ---some c++ code logics---
        } 
        
         => C++ programming has n number of reserved keywords, functions that will provide some level of 
         abstractions from the actual namespaces and the new libraries, which the programmers are 
         already using to allow it with more focus on the coding concepts. 
         
         => It also makes it easier to write the programming codes and clean them up using some methods 
         like destroy() or any other default methods belonging to the garbage collections. 
         
         => It depends upon the data types, and the object creation sizes must be calculated, and it 
         allocates the memory space for both the big storage data type variables alongside small amount 
         storage variables.
         
         
         => The function declaration and the definition will be the standard type of protocols, 
         and it brings all the types of members.Additionally the functions are calculated into the 
         current and future scopes.
         
         
         => Using namespace std::vector::insert(), it will extend the vectors by using to insert the 
         new elements at the correct positions in the vector containers.
         
         => The elements are being inserted into the container. If the element value is inserted into more 
         in the containers, it automatically increases the sizes.
         
         => It reallocates the memory spaces, and it’s going to be extended in the containers. 
         The function will increases the vector containers automatically in the memory space areas. 
         
         => The vector.insert(position, value) it passes the two types of arguments one is position, 
         and another one is valued. 

*/
                        // Modern Method...
     #include <vector> 
     #include <iostream>
     #include<cmath>
     
     void demo(const std::vector<int> &a)
     {
         for(auto i:a)
         {
             std:: cout<<' '<< i;
         }
         
         std:: cout << "\n";
     }
     

    int main()
    {
         std::vector<int>a(4,113);
         demo(a);
         auto b = a.begin();
         
         b = a.insert(b,200);
         demo(a);
         
         a.insert(b,5,273);
         demo(a);
         
         b = a.begin();
         std::vector<int>j(6,366);
         a.insert(b+2,j.begin(),j.end());
         demo(a);
         
         int k[]={432,543,654};
         a.insert(a.begin(),k, k+4);
         demo(a);
         
        return 0;
        
    }




