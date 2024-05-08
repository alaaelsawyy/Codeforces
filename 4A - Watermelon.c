
#include<stdio.h>
int main (){
    int x;
    scanf("%i",&x);           // Get the weight of the watermelon.
    if (x % 2 == 0 && x > 2)  // Check if the weight is even and greater than 2.
    {
     printf ("YES");
    }
     else 
     {
    printf("NO");
        }
      return 0;
    }