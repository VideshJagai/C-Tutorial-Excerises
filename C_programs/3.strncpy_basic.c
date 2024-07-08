/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

    // strncpy(destination, scource, sizeof(destination))

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[6] = "Hello";
    char str2[2];
    
    strncpy(str2,str1,sizeof(str2));
    printf("%s",str2);

    return 0;
}



