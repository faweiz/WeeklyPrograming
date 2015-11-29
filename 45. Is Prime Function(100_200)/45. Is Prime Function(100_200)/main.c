// C:Weekly programming 45. Is Prime Function(100_200)
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 11/18/2015
// Checks whether the number between 100 and 200 is prime

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,i,prime;

    for(c = 100; c <= 200; c++)
    {
        prime = 1;
        for(i = 2; i<=c/2;i++)
        {
            if(c%i == 0)
            {
                prime = 0;
                break;
            }
        }
        if(prime == 1)
        {
            printf("%d is Prime Number!\n\n",c);
        }
    }
    return 0;
}

