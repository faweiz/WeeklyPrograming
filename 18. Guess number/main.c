// C:Weekly programming 18: Guess Number
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Guess the number that match computer's number

#include <stdio.h>
#include <stdlib.h>
#include <time.h>  // include the time header

int main()
{
    srand(time(0));

    /* Test Below code to see how it work
    int number = rand();
    printf("%d\n", number%100);
    */

    int number = rand()%100+1; // x%n is to get a result of [0,n-1] of a whole number
    int count = 0;
    int num = 0;
    printf("I have a number between 1 to 100, please make a guess number 0_0 \n");
    do{
        printf("Guess a number between 1 to 100: ");
        scanf("%d",&num);
        count++;
        if(num>number)
        {
            printf("Your guessed number is too large!\n");
        }else if(num<number)
        {
            printf("Your guessed number is too small!\n");
        }
    }while(num!=number);
    printf("Great Job! You took %d times to found my number <(^_^)>",count);


    return 0;
}
