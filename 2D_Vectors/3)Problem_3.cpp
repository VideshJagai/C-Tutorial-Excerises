/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*
     In C++, Vector are called dynamic arrays that can automatically resize themseleves
     when an items is inserted or removed, with its storage being controlled automatically
     by the container.
     
     A 2-Dimensional Vector,  also known as vector of vectors, is vector with an adjustable
     number of rows where each of the rows is a vector. 
     
     Here, each vector index stores a vector that can be traversed and accessed with 
     assitance of iterator.
     
     Syntax:
        vector<vector<data_type>> v;
        
                                        How 2D Vector works in C++?
        
        Syntax of a two-dimensional vector. 
        
     vector<vector<int> > vtr{{34,55,43,13},{45,61,15,89},{53,62,17,12}
     
     Hence, a vector vtr is intialised with the three rows and four columns. 
     
     The vector appearance itself, we can know that it is similar to matrices.
     
     Applications of the 2-D vector include:
     i) Image reprsentation and manipulation
     ii) Reprsentation of 2-D grid.
     iii) Applications in dynamic programming..
     
        
*/

     
     // C++ Program that Initialises a Two-Dimensional Vector by Pushing a One-Dimensional
     // Vector to the back and Remove the Elements Later..
     
       
     #include <vector> 
     #include <iostream>
     
     #define R 3
     #define C 4
     using namespace std;
         
     // main method
     int main()
     {
         //intialise the two-dimensional vector 
         vector<vector<int> >vtr;
         // code for insertion of Elements
         int el =10;
         
         // code for insertion of elements
         for (int i=0; i<R;i++)
         {
             // Vector that is used to store items in columns
             vector<int> vtr1;
         for (int j=0;j<C; j++)
            {
             // value added to vector
             vtr1.push_back(el);
             el+=3;
            }
            vtr.push_back(vtr1);
         }
            
         // print the two two-dimensional vector:
         cout<<"The two dimensional vector created is:"<< endl;
         for (int i=0;i<vtr.size();i++)
         {
             for (int j=0;j<vtr[i].size();j++)
             {
                 cout<< vtr[i][j]<<" ";
             }
             cout<<endl;
         }
         
         // Remove last iems from the created vector..
         vtr[2].pop_back();
         vtr[1].pop_back();
         
         // print the two-dimensional vectors after removing elements
         cout<<"The two-dimensional vectors after removing element is: "<< endl;
          // loop to print the two dimensional vector..
         for(int i=0;i<vtr.size();i++)
         {
             // j loop
             for(int j=0;j<vtr[i].size();j++)
             {
                 cout<< vtr[i][j] << " ";
             }
             cout<< endl;
         }
        
        
         
         return 0;
     }
     
     
     /*
         A 2-Dimensional Vector is a vector with an adjustable number of rows
         where each rows is a vector. 
         
     */ 
     











