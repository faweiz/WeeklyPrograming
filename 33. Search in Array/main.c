// C:Weekly programming 33. Search in Array
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 5/6/2015
// Search in array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[50],size, search,i,count=0;
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
    printf("Enter the number need to search: ");
    scanf("%d",&search);

    for(i=0;i<size;i++)
    {
        if(array[i] == search) // if found
        {
            printf("%d is found at array[%d] \n",search,i);
            count++; // count numbers of time it found in the array list
        }
    }
    if(count == 0)
    {
        printf("%d is not found!",search);
    }
    else
    {
        printf("%d is found %d times in list",search,count);
    }

    return 0;
}
