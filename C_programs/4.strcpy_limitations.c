

    // strncpy(destination, scource, sizeof(destination))
    
    // strncpy will leave the string in str2(destination) without a terminating
    // NULL characters, if the size of str1(source) is equal to or greater than the size
    // of str2 (destination)

#include <stdio.h>
#include <string.h>


int main()
{
    char str1[6] = "Hello";
    char str2[2];
    
    strcpy(str2,str1,sizeof(str2));
    printf("%s",str2);

    return 0;
}

// Error: Too many arguments to function 'strcpy'. 
// This occurrence develops as we tried using strcpy.

