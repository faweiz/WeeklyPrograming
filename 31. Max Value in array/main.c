// C:Weekly programming 31. Max Value in array
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 5/6/2015
/* Require: 1. Define a array that can store maximum of 50 numbers;
            2. Allow user to enter the number of elements in array;
            3. Prints the location and index at which maximum element occurs in array.
How it work: First, we assume that maximum element occurs at the beginning of array
             and stores that value in a variable. Then we compare it with other array
             elements one by one, if any element is greater than our assumed maximum
             then maximum value and index at which it occurs is printed.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[50],max,size,i,location=1;

    printf("Enter the numbers of elements in array: ");
    scanf("%d",&size);
    if(size >50 )
    {
        printf("The max elements in array is 50\n");
        printf("Please reEnter the numbers of elements in array: ");
        scanf("%d",&size);
        printf("\n");
    }

        printf("Enter %d numbers: \n",size); // User enter the number of the value to find max value

        for(i=0;i<size;i++)
        {
            scanf("%d",&array[i]);
        }
        max = array[0]; // First,we assume that maximum element occurs at the beginning of array
        for(i=1;i<size;i++)
        {
            if(array[i]>max)
            {
                max = array[i]; // Find the max value in array one by one
                location = i+1; // Find the location of index of this max value
            }
        }
        printf("Maximum value for these number is %d at location %d", max, location);

    return 0;
}
