// C:Weekly programming 35. Insert/Delete in array
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 5/6/2015
// Available user to Insert/Delete elements in array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[50],size,i,choose,position,value;
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


    printf("Enter 1 to Insert | 2 to Delete: \n");
    scanf("%d",&choose);
    // Start Insert
    if(choose==1)
    {
        printf("Enter the location where you want to inset:");
        scanf("%d",&position);
        printf("Enter the value to insert: ");
        scanf("%d",&value);
        for(i = size-1;i>=position-1;i--)
        {
            array[i+1]=array[i];
        }
        array[position-1]=value; // inset the value in array[position-1]
        printf("New array is: \n");
        for(i=0;i<=size;i++)
        {
            printf("array[%d]: %d\n",i, array[i]);
        }
    }
    // Start Delete
    if(choose==2)
    {
        printf("Enter the location where you want to delete: ");
        scanf("%d",&position);
        if(position >= size+1)
        {
            printf("There is no number can be delete");
        }
        else
        {
            for(i=position-1;i<size;i++)
            {
                array[i]=array[i+1];
            }
            printf("New array is: \n");
            for(i=0;i<size-1;i++)
            {
                printf("array[%d]: %d\n",i,array[i]);
            }
        }
    }
    return 0;
}
