#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int sum = 0;
    int count = 0;
    printf("Enter a number: ");
    scanf("%d",&number);
        while(number != -1)
        {
            sum += number;
            count++;
            printf("Enter other number(-1 to exit): ");
            scanf("%d",&number);
        }
        printf("Average = %f\n",1.0*sum/count);

    return 0;
}
