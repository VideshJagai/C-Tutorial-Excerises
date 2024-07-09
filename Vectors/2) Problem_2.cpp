/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
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

     #include <vector> 
     #include <iostream>
     #include<cmath>
    using namespace std;

    int main()
    {
      
      float m;
      m =-67;
      cout << "abs("<<m<<"):" << abs(m)<< endl;
      m =-676.5645;
      cout<<"abs("<<m<<"):"<< abs(m)<< endl;
      m = 7665.2456;
      cout<<"abs("<<m<<"):"<< abs(m)<< endl;
      m = -.67832;
      cout<<"abs("<<m<<"):"<< abs(m)<< endl;
      m= -.87892;
      cout<<"abs("<<m<<"):"<< abs(m)<< endl;
      m = -6767.25245;
      cout<<"abs("<<m<<"):"<< abs(m)<<endl;
      m = -.6527;
      cout<<"abs("<<m<<"):"<< abs(m)<< endl;
      
      vector<int> i = {13,23,32,43};
      vector<int> j;
      
      j.insert(j.begin(),i.begin(),i.end());
      
      cout<<"Welcome Users the vector elements are:";
      for (auto k=j.begin(); k!=j.end();++k)
      {
          cout<<*k << "Have a Nice";
      }
      
      
        return 0;
    }




