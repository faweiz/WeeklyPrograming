// C:Weekly programming 11:Love Heart
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Draw a Love Heart

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z,result;
    for(y=1.5f;y>-1.5f;y-=0.1f)
    {
        for(x=-1.5f;x<1.5f;x+=0.05f)
        {
            z = x*x + y*y - 1;
            result = z*z*z - x*x * y*y*y;
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
