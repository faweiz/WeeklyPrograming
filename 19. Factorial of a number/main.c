// C:Weekly programming 19: Factorial of a number
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Find the Factorial of a number using different methods For loop, while loop, recursion and function

#include <stdio.h>
#include <stdlib.h>

/*
// Factorial program in c using While loop
int main()
{
    int num;
    printf("Enter a number to calculate its Factorial: ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Negative integers arenot allowed.\n");
    }
    else
    {
        int fact = 1;
        int i = 1;
        while(i<=num){
            fact *= i;
            i++;
        }
        printf("%d!=%d\n",num,fact);
    }
    return 0;
}
// End of Factorial program in c using While loop
*/

/*
// Factorial program in c using For loop
int main()
{
    int num;
    printf("Enter a number to calculate its Factorial: ");
    scanf("%d",&num);
    int fact = 1;
        int i;
        for(i=1; i<=num; i++)
        {
            fact *= i;
        }
    printf("%d!=%d\n",num,fact);
    return 0;
}
// End of Factorial program in c using For loop
*/

/*
// Factorial program in c using function
long factorial(int); // need to declare the function first
int main()
{
    int num;
    printf("Enter a number to calculate its Factorial: ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Negative integers arenot allowed.\n");
    }
    else
    {
        long fact = factorial(num);
        printf("%d! = %ld\n", num, fact);
    }
    return 0;
}
long factorial(int number)
{
    int i;
    long result = 1;
    for(i=1;i<=number;i++)
    {
        result = result * i ;
    }
    return result;
}
// End of Factorial program in c using function
*/

// Factorial program in c using recursion
long factorial(int); // need to declare the function first
int main()
{
    int num;
    printf("Enter a number to calculate its Factorial: ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Negative integers arenot allowed.\n");
    }
    else
    {
        long fact = factorial(num);
        printf("%d! = %ld\n", num, fact);
    }
    return 0;
}
long factorial(int number)
{
    if(number == 0)
    {
        return 1;
    }else
    {
        return (number*factorial(number-1)); // recurse over and over again, until number = 0;
    }
}
// End of Factorial program in c using recursion




