/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
    char str1[10]="Hello";
    char str2[10];
    
    printf("%s\n", strcpy(str2,str1));
    
    // Strcpy returns the pointer to the first character of the string which is
    // copied in the destination. Hence if we use %s, then whole string will be 
    // printed on the screen.
    
    printf("%s",str2);

    return 0;
}
