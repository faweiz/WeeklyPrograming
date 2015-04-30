// C:Weekly programming 08:Prime number
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Draw a Love Heart

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,a,result;
    for(y=1.5f;y>-1.5f;y-=0.1f)
    {
        for(x=-1.5f;x<1.5f;x+=0.05f)
        {
            a = x*x + y*y - 1;
            result = a*a*a - x*x * y*y*y;
            // Method 1:
           //putchar(result <= 0.0f ? '*' : ' ');
            // Method 2:
           if(result <= 0.0f)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
        }
    printf("\n");
    }
    return 0;
}
