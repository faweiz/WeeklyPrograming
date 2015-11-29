// C:Weekly programming 47. Find_Max_in_Array
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 11/18/2015
// Find the maximum value among 4 signed integers.

#include <stdio.h>
#include <stdlib.h>

int array[4] = {1,2,3,4};

int main()
{
    int i,maxLocation=0,maxValue;
    maxValue = array[0];
    for(i=0;i<4;i++)
    {
        if(array[i]>maxValue)
        {
            maxValue = array[i];
            maxLocation = i;
        }
    }
    printf("Max Value in this array is : %d\n",maxValue);
    return 0;
}



