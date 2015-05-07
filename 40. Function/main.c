// C:Weekly programming 40. Function
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 5/7/2015
// Simple program of how to define and call functions

#include <stdio.h>
#include <stdlib.h>

/* Define 2 functions at the beginning of the program
    The definition of functions can also be put before main
*/
double mult(double x,double y);
double average(double x, double y);

int main()
{
    double a,b;
    printf("Enter 2 numbers to be multiplied and average: \n");
    scanf("%lf %lf",&a,&b);
    printf("The product of %.2lf and %.2lf is %.2lf\n",a,b,mult(a,b));
    printf("The average of %.2lf and %.2lf is %.2lf\n",a,b,average(a,b));
    return 0;
}

// The definition of functions
double mult(double x, double y)
{
    return x*y;
}

double average(double x, double y)
{
    return (x+y)/2;
}
