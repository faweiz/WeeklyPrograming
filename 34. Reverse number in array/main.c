// C:Weekly programming 34. Reverse Numbers in array
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 5/6/2015
// Reserve a series of number in the array elements

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[50],size,i;
    printf("Please enter the number of elements in array: ");
    scanf("%d",&size);
    if(size > 50 )
    {
        printf("The max elements in array is 50\n");
        printf("Please reEnter the numbers of elements in array: ");
        scanf("%d",&size);
        printf("\n");
    }
    printf("Enter %d numbers: \n",size);
    for(i=0;i<size;i++)
    {
        printf("array[%d]: ",i);
        scanf("%d",&array[i]);
    }
    printf("Reverse Number: \n");

    // start reverse
    for(i = size-1;i>=0;i--)
    {
        printf("array[%d]: %d\n",i,array[i]);
    }
    return 0;
}
