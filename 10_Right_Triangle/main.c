// C:Weekly programming 08:Prime number
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Use 2D array to Build a Right Triangle

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j, triangle[6][6];
     for(i=0;i<5;i++)
     {
         triangle[i][i] = 1;
         triangle[i][0] = 1;
     }
     for(i=2;i<5;i++)
     {
         for(j=1;j<=i-1;j++)
         {
             triangle[i][j]=triangle[i-1][j] + triangle[i-1][j-1];
         }
     }
     for(i=0;i<5;i++)
     {
         for(j=0;j<i;j++)
         {
             printf("%4d",triangle[i][j]);
         }
         printf("\n");
     }
     return 0;
}
