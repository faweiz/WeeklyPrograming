// C:Weekly programming 24: The Continue statement
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 5/1/2015
// The Continue statement is similar to break.
// -Break: transfer control "just past" the end of a loop;
// -Continue: transfer control to a point "just before" the end of the loop body

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    for(;;)
    {
        printf("Enter a number (enter 0 to stop): ");
        scanf("%d",&n);
            if(n != 0)
            {
                printf("%d cubed is %d\n",n,n*n*n);
                continue; // It Is entered value is 0, the "continue" will jump to before the end of the loop
            }
    }

    return 0;
}
