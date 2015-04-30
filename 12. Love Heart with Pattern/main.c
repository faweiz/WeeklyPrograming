



#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z,result;
    for(y=1.5f;y>-1.5f;y -=0.1f)
    {
        for(x=-1.5f;x<1.5f;x+=0.05f)
        {
            z = x*x + y*y -1;
            result = z*z*z - x*x * y*y*y;
            putchar(result <= 0.0f ? "..#.$.*.0"[(int)(result * -8.0f)] :' ');
        }
    printf("\n");
    }
    return 0;
}
