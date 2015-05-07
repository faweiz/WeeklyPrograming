// C:Weekly programming 36. Sorted array
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 5/6/2015
// Available user to sort array in ascending order

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[50],size,i,swap,position;
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


    for(i=1;i<=size-1;i++)
    {
        position=i;
        while(position>0 && array[position]<array[position-1])
        {
                         swap = array[position];
              array[position] = array[position-1];
            array[position-1] = swap;
            position--;
        }
    }
    printf("Sorted New array in ascending order: \n");
    for(i=0;i<=size-1;i++)
    {
        printf("array[%d]: %d\n",i,array[i]);
    }
    return 0;
}
