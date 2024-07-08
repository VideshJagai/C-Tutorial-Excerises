

#include <stdio.h>
#include<string.h>

int main()
{
     char str1[10] = "Hello";
     char str2[10];
     char str3[10];
    
     // Recall strcpy within another strcpy. Hence we are copying the contents of 
     // str1 within str2. Thus the first strcpy call 1: {: trcpy(str2,str1) },
     // returns the pointer of the first string (:str1) copied to (:str2). 
    
     // Therefore proceeding with  recursive strcpy call 2: strcpy(str3,strcpy(str2,str1)),
     // this development intrudes that pointer of string of source (:str2) is copied to 
     // str3 destination [strcpy(str3,strcpy(str2,str1));]. 
    
    
     strcpy(str3,strcpy(str2,str1)); 
     printf("%s %s",str2, str3);
     
     return 0;
}

    // In the call to strcpy(str1,str2), there is no way the strcpy will check whether 
    // the string pointed by str2 will fit in str1.

    // If the length of the string pointed by the str2 is greater than the length of the 
    // character array str1 then it will be undefined behaviour.



