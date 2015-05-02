// C:Weekly programming 17: Find average of numbers
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Enter numbers then Find average of numbers, when enter "0" to exit program

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number;
    float sum = 0;
    int count = 0;
    printf("Enter a number: ");
    scanf("%f",&number);
        while(number != 0)
        {
            sum += number;
            count++;
            printf("Enter other number(0 to exit): ");
            scanf("%f",&number);
        }
        printf("Average = %.3f\n",1.0*sum/count);

    return 0;
}
