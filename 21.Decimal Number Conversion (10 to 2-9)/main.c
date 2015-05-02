// C:Weekly programming 21: Decimal Number Conversion (10 to 2-9)
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
/* OverView:
        This project will involve converting a decimal (base 10) number into its equivalent value in
    any base between 2 and 9 (inclusive).
        Write a complete C program that prompts for and reads two values: a positive decimal (base
    10) integer number between 0 and 32767 (inclusive) followed by the base (a whole number
    between 2 and 9 inclusive) that your program should convert the first value into. You should
    just assume that the input is within the legal range specified. Your output should always be
    displayed using 15 digits even if fewer digits are sufficient.
       *You cannot use conditionals statements (e.g. if, switch statements), loops (e.g. while,
    for statements), arrays, string routines, user-written functions, or any C library routines
    whatsoever (other than the I/O routines scanf and printf). The only format code allowable
    in your printf and scanf calls is %d.
*/

#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int number,base;
    printf("Proj. #3 - Fawei Zhang\n");
    printf("Enter a decimal (base of 10) number between 0 and 32767:");
    scanf("%d",&number);

    printf("Base to convert:");
    scanf("%d",&base);

    int result=0, i=1;

    printf("%d",number);
        while(number>0)
        {
            result=result+(i*(number%base));
            i*=10; //i=i*10;
            number/=base;//number=number/base;
        }
    printf(" in base %d: %.15d",base,result);

    return 0;
}
*/

int main()
{
    int n,base,initialValue;
    int d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12,d13,d14,d15;

    d1=d2=d3=d4=d5=d6=d7=d8=d9=d10=d11=d12=d13=d14=d15=0; // Let they initial to be "0"

    printf("Proj. #3 - Fawei Zhang\n");
    printf("Enter a decimal (base of 10) number between 0 and 32767:");
    scanf("%d",&n);

    initialValue= n;

    printf("Base to convert:");
    scanf("%d",&base);
    // 15th digit
    d15 = n % base;
    n = n / base;
    // 14th digit
    d14 = n % base;
    n = n / base;
    // 13th digit
    d13 = n % base;
    n = n / base;
    // 12th digit
    d12 = n % base;
    n = n / base;
    // 11th digit
    d11 = n % base;
    n = n / base;
    // 10th digit
    d10 = n % base;
    n = n / base;
    // 9th digit
    d9  = n % base;
    n = n/ base;
    // 8th digit
    d8  = n % base;
    n = n / base;
    // 7th digit
    d7  = n % base;
    n = n / base;
    // 6th digit
    d6  = n % base;
    n = n / base;
    // 5th digit
    d5  = n % base;
    n = n / base;
    // 4th digit
    d4  = n % base;
    n = n / base;
    // 3rd digit
    d3  = n % base;
    n = n / base;
    // 2nd digit
    d2  = n % base;
    n = n / base;
    // 1st digit
    d1  = n % base;
    n = n / base;

    printf("%d in base %d: %d%d%d%d%d%d%d%d%d%d%d%d%d%d%d \n", initialValue,base,d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12,d13,d14,d15);

    return 0;
}
