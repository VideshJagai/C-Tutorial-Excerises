/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*
     In C++, Vector are called dynamic arrays that can automatically resize themseleves
     when an items is inserted or removed, with its storage being controlled automatically
     by the container.
     
     The 3D vector is a vector , like the 3D array. It stores elements in three dimensions, in
     addition it can be declared and assigned values the same as a 3D matrix.
     
     The 3D Vector is dynamic which has the capability to resize itseld automatically when
     an element is to be inserted or deleted. 
     
        SYNTAX:
            The decalration syntax of the 3D vector in C++ :
            
         std :: vector< std :: vector< std :: vector< data_type > > > vectName;  
         
         The initialization syntax of the 3D vector in C++:
         
         vectName[index1][index2][index3]=value;
        
         Or:
         The syntax to declare and initalise at the same time for 3D Vector in C++:
            
         std :: vector< std :: vector< std :: vector< data_type > > > 
         vectName( size, std :: vector< std :: vector<data_type> > 
         ( size, std :: vector< data_type  >( size, value)));
         
         Parameters:
         
         i) data_type: This specifes the type of vector we want to generate/create. Hence, 
         the datype can be int, float, string etc accordingly.

         ii) Size: This specfies the size of the vector we want to create; in each dimension 
         of the vector, it can be same or different.
         
         iii) Value: This specfies the initialize value for the vector element and all the 
         element initialise by this value.
         
          Working of the 3D vectors in C++
         -> A 3D vector is actually a dynamic 3D array which can be inserted and deleted elements
         by resizing itself. 
         
         -> The 3D vector also defines what type of it is so that we could create the 
         int type,string type, float type etc accordingly. 
         
         
         -> The 3D vector stores the elements in three dimension as block size, row size 
         and column size, which is represented by using three different subscripts.
        


*/

     
     
     
     // for 3D vector..  
     #include <vector> 
     #include <iostream>
     
     using namespace std;
         
     // main method
     int main()
     {

         // Initialising 3D vector "vect3d" with
         // values 1 
         // here creating the vector of 1D of 2 sizes , 2D of 2 size and 3D of 3 size.
         std:: vector<std::vector<std::vector<int> > > vect3d(2,std::vector<std::vector<int> > (2,std::vector<int>(3,1))); 

          // Displaying the 3D vector by using three iterators..
            for(int i=0; i<vect3d.size(); i++)
            {
               cout<<"Elements at block"<< i <<":";
            // Displaying elements at each column , 0 is the ending iterator,
            // size() is the ending iterator..
            for(int j =0; j!=vect3d[i].size();j++)
                {
                     cout  <<"Elements at row: "<< j <<":"; 
                     
                     for(int k=0; k!=vect3d[i][j].size();k++)
                     {
                         cout<< vect3d[i][j][k] << ' ';
                     }
                     cout<< endl; 
                    
                }
                
            }
            
            
         return 0;
     }
     
     
     /*
         The 3D vector is declared with the different size for each dimension as 2 for 
         block size, 2 for row size and 3 for the column size, so the number of elements 
         in this vector will be 12 elements..
         
     */ 
     











