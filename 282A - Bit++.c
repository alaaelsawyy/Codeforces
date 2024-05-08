#include <stdio.h>
#include <string.h>

int main(){
    int num_operations;  
    int i,X=0;
    char str [4]= "str" ;
    scanf("%i",&num_operations);              // Read the number of operations.

    for (i=0; i<num_operations; i++){         // Loop through each operation
    scanf("%s",str);
     if (strcmp(str,"X++") == 0 || strcmp(str,"++X") == 0)        //string comparisons ,The strcmp function returns 0 if the strings are identical.
     {
         X++;                                 // Increment X if the operation is "++".
     }
    else
     {
         X--;                                // Decrement x if the operation is "--".
     }
       }
    printf("%i\n",X);                        // Print the final value of x.

    return 0;
       }