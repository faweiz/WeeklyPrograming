// C:Weekly programming 15: Do While Loop
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Find the Sum of number from 1 to 100 using Do While

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int sum = 0;
    do{
        sum += i;
        i++;
    }while(i<=100);
    printf("Find the Sum of number from 1 to 100 using 'Do While'\n");
    printf("The sum of 1 to 100 = %d\n",sum);
    return 0;
}
