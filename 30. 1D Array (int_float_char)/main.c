// C:Weekly programming 30. 1D Array (int_float_char)
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Base of array type for int, float and char

#include <stdio.h>
#include <stdlib.h>

int main()
{
      int array1[5]={0,1,2,3,4};
    float array2[5]={1.1,1.2,1.3,1.4,1.5};
     char array3[5]={'a','b','c','d','e'};

    int i,j,k;
    printf("Int type array: \n");
    for(i=0;i<5;i++)
    {
        printf("%d \n",array1[i]);
    }
    printf("Float type array: \n");
    for(j=0;j<5;j++)
    {
        printf("%.2f \n",array2[j]);
    }
    printf("Char type array: \n");
    for(k=0;k<5;k++)
    {
        printf("%c \n",array3[k]);
    }
    return 0;
}
