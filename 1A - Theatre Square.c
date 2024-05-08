#include <stdio.h>

int main(){
    long long int n, m, a, width, length, num_flagstones;     

    scanf("%lld%lld%lld",&n,&m,&a);            // Read dimensions of the square and flagstone size.
    width  = n / a;                            // Integer division for whole flagstones.
    length = m / a;

    if (n % a != 0 )                           // Check if there's a remainder (need one more flagstone).
    {
        width++;                               // Increment flagstones_width by 1 to account for the extra flagstone.
    }
    if (m % a != 0)
    {
        length++;                              // Increment flagstones_length by 1 to account for the extra flagstone.
    }
    num_flagstones = width * length;
    printf ("%lld\n", num_flagstones);         // Print the total number of flagstones needed.

    return 0;
}