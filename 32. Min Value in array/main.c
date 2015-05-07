// C:Weekly programming 32. Min Value in array
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 5/6/2015
/* Require: 1. Define a array that can store maximum of 50 numbers;
            2. Allow user to enter the number of elements in array;
            3. Prints the location and index at which Minimum element occurs in array.
How it work: First, we assume that minimum element occurs at the beginning of array
             and stores that value in a variable(min). Then we compare it with other array
             elements one by one, if an element is smaller than it then this new element become t
             the new minimum value and this process is repeated till the array is completed scanned.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[50],min,size,i,location=1;
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
    min = array[0];
    for(i=1;i<size;i++)
    {
        if(array[i]<min) // compare the min value by use "less than" sign
        {
            min = array[i];
            location = i;
        }
    }
    printf("Minimum value is %d at location array[%d]",min,location);
    return 0;
}
