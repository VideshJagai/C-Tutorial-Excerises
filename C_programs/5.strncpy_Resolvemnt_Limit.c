/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

    // strncpy(destination, scource, sizeof(destination))
    
    // strncpy will leave the string in str2(destination) without a terminating
    // NULL characters, if the size of str1(source) is equal to or greater than the size
    // of str2 (destination)

#include <stdio.h>
#include <string.h>


int main()
{
    char str1[6] = "Hello";
    char str2[6];
    
    strncpy(str2,str1,sizeof(str2));
    str2[sizeof(str2)-1] = '\0';
    printf("%s", str2);
    
    return 0;
}



