// C:Weekly programming 08:Prime number
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Array of 9*9 arithmetic function

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,result;
    for (i = 0; i<=10; i++)
    {
        for(j = 0; j<=10; j++)
        {
            result = i*j;
            printf("%d * %d = %-3d \n",i,j,result); // %-3d means left align, 3 spaces
        }
        printf("\n"); //skip a line
    }
    return 0;
}
