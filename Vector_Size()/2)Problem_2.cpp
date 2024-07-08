
/*
        Introduction to C++ vector size:
        
     => Vectors are called dynamic arrays that can automatically resize 
     themselves when an item is inserted or removed, with its storage being controlled
     automatically by the container.
     
     => Vector items are kept in adjacent storage, which is easy to access 
     and traverse with the help of iterators.
     
     => Moreover, items are inserted at the end, and it may take some time as 
     an extension of the array is needed in certain cases.
     
     => There are several functions that support vector operations and size() is one 
     such function that assist in returning the vector of the container or count of
     items avaliable in it.
     
     
            SYNTAX:
    
     - New concept in a programming language, you have to understand the same 
     basic syntax.
            
            -> Syntax of the size() function in vector:
            
            i) vec.size()
        
            Here, vec is the name of the vector..
            
    
     Paramter of the function:
     Unlike other functions, no paramter are passed in this:
     
     Return value:
     Count of items in the container.
     
     Exeptions and Errors
     i) Do not gurantee exception throw.
     ii) When paramters are passed, errors are thrown..
     
     
     NOTE: 
         i)   vector::front(): This function can be used to fetch the first 
          element of a vector container.
          
          ii) vector::back(): This function can be used to fetch the 
          last element of a vector container.
     
     
     
*/
     // C++ Program that uses function sie() for addition vector element
     
     #include <vector> 
     #include <iostream>
     using namespace std;
     
     // main method
     int main()
     {
         int s = 0; // variable for sum 
         // declare a vector..
         vector<int> vtr{31,52,63,84, 57};
         
         // print the vector size:
         cout<<"The vector size is:"<< vtr.size();
         
         while(vtr.size()>0)
         {
             s = s+ vtr.back();
             vtr.pop_back();
         }
         
         cout<<"\n Sum of the vector element is:" << s;
         
         return 0;
     }
     
     /*
     
         In this program, a vector is declared with few elements and also, a variables
         is declared for storing the sum of the elements..
     
    
     */




