// C:Weekly programming 43. Use Recursive function to Sum
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 5/7/2015
/* Use the recursive method to sum of 1 to 100: 1+2+3+...+ n = ....*/

#include <stdio.h>
#include <stdlib.h>

int sum(int);
int main()
{
    int n = 100, result = 0;
    result = sum(n);
    printf("Sum of 1 to %d: 1+2+3+...+%d = %d",n,n,result);
    return 0;
}
int sum(int n)
{
    if(n==1)
    {// end of recursive
        return 1;
    }
    else
    {
        return n+sum(n-1);
        /* the initial value for n = 100;
           thus, n+sum(n-1) = 100+sum(100-1)= 100+sum(99)=100+99+sum(98)....
        */
    }
}
