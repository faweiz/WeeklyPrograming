// C:Weekly programming 23: The Break statement
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// The Break statement can used to jump out of a while, do, or for loop

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    for(;;)
    {
        printf("Enter a number (enter 0 to stop): ");
        scanf("%d",&n);
            if(n == 0)
            {
                break; // if the entered value of n is equal to 0, then exit the loop.
            }
        printf("%d cubed is %d\n",n,n*n*n);
    }
    return 0;
}
