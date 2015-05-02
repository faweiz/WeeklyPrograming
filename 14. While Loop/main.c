// C:Weekly programming 14: While Loop
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Find the Sum of number from 1 to 100

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int sum =0;
    while(i<=100){
        sum += i;
        i++;
    }
    printf("The sum of 1 to 100 = %d\n",sum);
    return 0;
}
