// C:Weekly programming 41. Use function to find max_min value
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 5/7/2015
// Use function to find maximum and minimum value


#include <stdio.h>
#include <stdlib.h>

int max_min(int a, int b)
{
    if(a>b)
    {
        printf("%d is greater than %d\n",a,b);
        return a;
    }
    else
    {
        printf("%d is less than %d\n",a,b);
        return b;
    }
}
int main()
{
    int a,b,c;
    printf("Enter two number to compare: \n");
    scanf("%d %d",&a,&b);
    c = max_min(a,b);
    printf("Maximum value is %d",c);
    return 0;
}
