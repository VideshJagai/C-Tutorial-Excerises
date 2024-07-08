


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



