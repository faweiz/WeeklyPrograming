// C:Weekly programming 25: The GoTo statement
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 5/1/2015
// The goto statement is capable to jumping to 'any' statement in a function, provided that the statement has a 'label'
//
// Break and continue are jump statements that transfer control from one point in the program to another.
// Both are restricted: the target of a break is a point just beyond the end of the enclosing loop,
// while the target of the continue is a point just before the end of the loop.

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
                goto done; // If the entered value is 0, the "goto" will jumping to the label which named "done"
            }
            else
            {
                printf("%d cubed is %d\n",n,n*n*n);
            }
    }
    done: // "goto" statement jump to here, when entered value is 0 and do the following function
    return 0;
}
