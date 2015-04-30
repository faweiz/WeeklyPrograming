// C:Weekly programming 08:Prime number
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// A 'perfect number' is a positive integer that is
// equal to the sum of its proper positive divisors
// ex: The 6 is a perfect number because 1, 2, and 3
// are its proper positive divisors : 6=1+2+3
// This program will find the 'perfect numbers' from 2 to 1000

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // the array perfect[] is a static array
    static int perfect[10];
    int i,j,k,z;
    for(j=2;j<1000;j++) // range from 2 to 1000
    {
        k = -1;
        z = j;
        for(i=1;i<j;i++)
        {
            if((j%i)==0)
            {
                k++;
                z=z-i;
                perfect[k]=i;
            }
        }
        if(z==0)
        {
            // display the perfect numbers and its  positive divisors
            printf("%d is a perfect number: ",j);
            for(i=0;i<k;i++)
            {
                printf("%d ",perfect[i]);
            }
            printf("%d \n",perfect[k]);

        }
    }
    return 0;
}

