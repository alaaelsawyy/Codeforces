#include <stdio.h>
#include <string.h>

int main(){
int num , i;
char word [101];           // Array to hold up to 100 characters.
scanf("%i",&num);           // Read the number of words from the user.

for (i=0; i < num; i++)
  {
scanf("\n%s",word);        // Read a word from the user.
int len= strlen(word);     // Get the length of the entered word.
if (len > 10)              // Word is considered long (more than 10 characters).
{
printf("%c%d%c\n",word[0], len-2, word[len-1]);   // Print first letter, number of characters between first and last (excluding them), last letter.
}
else                        // Word is short (less than or equal to 10 characters).
{
printf("%s\n",word);
}
  }
    return 0;
}