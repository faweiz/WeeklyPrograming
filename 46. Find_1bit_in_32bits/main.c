// C:Weekly programming 46. Find_1bit_in_32bits
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 11/25/2015
// Find how many 1-bits exsits in the 32-bit number.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n = 33;
    int parity = 0;
    int counter = 0;
    printf("The total number of 1-bit in %d", n);
    while(n)
    {
        parity =! parity;
        n = n & (n-1);
        counter++;
    }
    printf(" is %d", counter);
    while(1);
}
