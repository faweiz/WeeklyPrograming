// C:Weekly programming 07:9*9
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 5/6/2015
// Array of 9*9 arithmetic function

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,result;
    for (i = 1; i<=9; i++)
    {
        for(j = 1; j<=9; j++)
        {
            result = i*j;
            printf("%4d",result);
        }
        printf("\n"); //skip a line
    }
    return 0;
}
