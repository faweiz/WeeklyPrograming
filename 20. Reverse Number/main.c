// C:Weekly programming 20: Reverse a Number
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Reverse the number entered by the user and prints its reversed number

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,number, reverse=0;
    printf("Enter a number to reverse: ");
    scanf("%d",&number);
    num = number; // store initial number entered into "num"
    while(number!=0)
    {
        reverse = reverse * 10;
        reverse = reverse + number%10; // use % to obtain the digit of this number
        number  = number/10; // increment by this number by /10
    }
    printf("Reverse number of %d is %d\n", num, reverse);
    return 0;
}
