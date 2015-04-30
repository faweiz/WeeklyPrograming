// C:Weekly programming 13: Love Heart in 3D
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Draw a Love Heart in 3D (Tested on ideone.com

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float result(float x,float y, float z)
{
        float sum = x*x + 9.0f/4.0f * y*y + z*z - 1;
        float sum2 = sum*sum*sum - x*x * z*z*z - 9.0f/80.0f * y*y * z*z*z;
        return sum2;
}
float result2(float x, float z)
{
    float y;
    for(y=1.0f;y>=0.0f;y-=0.001f)
    {
        if(result(x,y,z) <= 0.0f)

            return y;

    }
    return 0.0f;
}

int main()
{
    float x,z;
    for(z=1.5f;z>-1.5f;z-=0.05f)
    {
        for(x=-1.5f;x<1.5f;x+=0.025f)
        {
            float a = result(x,0.0f,z);
            if(a<=0.0f)
            {
                float y0 = result2(x,z);
                float nY = 0.01f;
                float nX = result2(x+nY, z) - y0;
                float nZ = result2(x, z+nY) - y0;
                float nSum = 1.0f / sqrtf(nX*nX + nY*nY + nZ*nZ);
                float sum = (nX + nY - nZ) * nSum * 0.5f + 0.5f;
                putchar("..#.$.0.0"[(int)(sum*5.0f)]);
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







