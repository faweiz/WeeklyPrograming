// C:Weekly programming 44. Is Prime Function: Test whether a number is prime
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 5/7/2015
/* The function (is_prime)that returns true if its parameter is a prime number and false if it isn't.
    When given a number n, the is_prime function will divide n by each of the numbers between 2 and
    the square root of n; if the remainder is 0; we know that n isn't prime

 */


#include <stdio.h>
#include <stdlib.h>

#include<stdbool.h> // need to be include to use bool 'true' or 'false' type

bool is_prime(int number)
{
    int i;
    if(number<=1) // if number entered is less than 1, returns it as a false. 1 is not count as a prime number
    {
        return false;
    }
    for(i=2;i*i<=number;i++)
    {
        if(number%i == 0) // if the remainder is 0; we know that n isn't prime
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num;
    while(num!=-1)
    {
        printf("Enter a number: ");
        scanf("%d",&num);
        if(is_prime(num))
        {
            printf("Prime Number!\n\n");
        }
        else
        {
            printf("Not Prime Number!\n\n");
        }
    }
    return 0;
}
