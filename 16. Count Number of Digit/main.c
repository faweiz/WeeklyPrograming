// C:Weekly programming 16: Count Number of Digit
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Enter a integer  number and Count Number of Digit of this integer

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,count=0;
    printf("Enter an integer number: ");
    scanf("%d",&x);
    int num = x;
        while(x!=0)
        {
            x /= 10;
            ++count;
        }
        printf("%d has digit of: %d\n",num,count);
    return 0;
}
