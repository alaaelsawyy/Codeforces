#include <stdio.h>
 
int main() {
    int num_problems, problems_attempted = 0;
    scanf("%d", &num_problems);                   // Read the number of problems.

    for (int i = 0; i < num_problems; i++)        // Loop through each problem.
    {  
        int x, y,z ;
        scanf("%d %d %d", &x, &y, &z);           // Read confidence levels (1: confident, 0: not confident).
        if (x + y + z >= 2)                      // Check if sum of knowledge values is at least 2.
        {
            problems_attempted++;                // Increment problemsSolved if at least 2 confident.
        }
    }
    printf(" %i\n ",problems_attempted);         // Print the number of problems solved.
    
    return 0;
    }