// C:Weekly programming 08:Prime number
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Determine the prime number from 0 to 200

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,j,k,number=0,prime=1;
    printf("The prime number from 0 to 200 are: \n");
    for (i = 0; i<=200;i++)
    {
        k = sqrt(i+1);
        for (j=2;j<=k;j++)
      {
            if(i%j==0)
            {
                prime = 0;
                break;
            }
      }
            if(prime)
            {
                printf("%-4d",i);
                number ++;
                if(number%10==0)
                {
                    printf("\n");
                }
            }
    prime = 1;
    }
    printf("\n The total is %d", number);
    return 0;
}






