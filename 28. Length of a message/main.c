// C:Weekly programming 28. Length of a message
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 5/6/2015
// Determines the length of a message

#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    char ch;
    int len = 0;

    printf("Enter the message: ");
    ch = getchar();
    while(ch!='\n')
    {
        len++;
        ch = getchar();
    }
    printf("Your message was %d character(s) long. \n",len);
    return 0;
}
*/

// To be shortened

int main()
{
    int len = 0;

    printf("Enter the message: ");
    while(getchar() != '\n')
    {
        len++;
    }
    printf("Your message was %d character(s) long. \n",len);
    return 0;
}
