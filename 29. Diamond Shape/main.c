// C:Weekly programming 29. Diamond Pattern
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 5/6/2015
// Print diamond pattern of starts

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,shape=1;
    printf("Enter number of rows: \n");
    scanf("%d",&i);
    shape = i - 1;
    for(k=1;k<=i;k++)
    {
        for(j=1;j<=shape;j++)
        {
            printf(" ");
        }
            shape--;
        for(j=1;j<2*k-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    shape = 1;
    for(k=1;k<=i-1;k++)
    {
        for(j=1;j<=shape;j++)
        {
            printf(" ");
        }
        shape++;
        for(j=1;j<=2*(i-k)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
