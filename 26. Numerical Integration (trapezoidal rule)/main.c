// C:Weekly programming 26. Numerical Integration (trapezoidal rule)
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: Spring 2014
/* OverView:
        The trapezoidal rule is one of the most straight-forward methods for performing numerical
    integration. The idea is to compute the (approximate) integral of some function f(x) between
    limits a and b – that is, "integer (f(x) dx) of a to b" – by dividing the line from a to b into n equal parts for
    some n. We then approximate the sum of the areas of the n trapezoids; our approximation
    will become more accurate as n increases. For example, consider this graph of function f(x)
    for the case where n = 4:
        Let δ = (b − a)/n. Then the ith trapezoid has width δ and runs from a + (i − 1)δ to a + iδ.
The area of the ith trapezoid is δ times the average of the two vertical sides, that is

                        δ(f(a + (i − 1)δ) + f(a + iδ))/2

        To approximate "integer (f(x) dx) of a to b", sum up the areas of all n trapezoids
        Write a complete C program that inputs values a, b, and n and then outputs the sum of the
areas of the n trapezoids. You must use the trapezoidal rule to perform your integration.
Your program should check for and only allow correct input for these values (i.e. b must be
greater than a, and n must be greater than 0). Print an appropriate error message and force
them to try again if the user does not provide correct input (see the sample run below). All
floating point values should be inputted and stored as type double.
Your function must have signature double f(double x) and be placed in a different file
(suggested name of file: f.c, though any name is OK) than the file containing your main
function. File f.c will be compiled separately; you should not turn in this file as I will use
1
my own to test your code (i.e. I will provide my own function f(x) in a separate file when
I run your project code). Because we have not yet covered user-defined functions, a brief
tutorial can be found in the Appendix at the end of this document.
*/

#include <stdio.h>
#include <stdlib.h>
/* Project #5 Trapezoidal Rule
	Spring 2014
	Fawei Zhang */

double f(double x); // Function double f, Must declare the function first

int main() {

    double a,b,h,sum;
    int n,i;
    printf("Proj. #5 - Fawei Zhang\n");
    printf("Enter lower limit(a): ");
    scanf("%lf", &a);

    printf("Enter upper limit(b) (should be greater than %.2lf): ",a);
    scanf("%lf", &b);

    while(a>b)
    {
        printf("[ERROR] The lower limit must less than upper limit, please try again.\n");
        printf("lower limit: ");
        scanf("%lf", &a);

        printf("upper limit (should be greater than %.2lf): ",a);
        scanf("%lf", &b);
    }

    printf("Enter number of trapezoids: ");
    scanf("%d", &n);

    while(n<0)
    {
        printf("[ERROR] The number of trapezoids must greater than 0, please try again.\n");
        printf("Enter number of trapezoids: ");
        scanf("%d", &n);
    }

    h = (b-a)/n;
    sum = (0.5 * h) * (f(a) + f(b));
    for (i = 1; i < n; i++)
    {
        sum = sum + h  * f(a +(i * h));
    }

    printf("Value of areas for %d trapezoids is %lf\n",n,sum);
    return 0;
    }


    double f(double x){
        return x*x; // note: I used x*x as a function
    }
