// C:Weekly programming 37. Max_Min_Search_Reverse_Insert_Delete_Sort(31_32_33_34_35_36)
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 5/6/2015
// This program is a combination of previous 7 program(31,32,33,34,35 and 36)

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int array[50],size,i,location,max,min,search,count=0,choose,value,position,swap,sum=0;

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
            printf("array[%d]: ",i);
            scanf("%d",&array[i]);
        }

        /*-------  31. Find max value  ------*/
        max = array[0]; // First,we assume that maximum element occurs at the beginning of array
        for(i=1;i<size;i++)
        {
            if(array[i]>max)
            {
                max = array[i]; // Find the max value in array one by one
                location = i; // Find the location of index of this max value
            }
        }
        printf("----------------------------  31. Find max value  ----------------------------\n");
        printf("Maximum value is %d at array[%d]\n", max, location);
        /*-------  32. Find min value       ------*/
        min = array[0];
        for(i=1;i<size;i++)
        {
            if(array[i]<min) // compare the min value by use "less than" sign
            {
                min = array[i];
                location = i;
            }
        }
        printf("---------------------------- 32. Find min value  ----------------------------\n");
        printf("Minimum value is %d at array[%d]\n",min,location);
        /*-------  33. Find Search value    ------*/
        printf("---------------------------- 33. Find Search value  -------------------------\n");
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
            printf("%d is not found!\n",search);
        }
        else
        {
            printf("%d is found %d times in list\n",search,count);
        }
        /*-------  34. Find Reverse value   ------*/
        printf("---------------------------- 34. Find Reverse value  -------------------------\n");
        printf("Reverse Number: \n");
        for(i = size-1;i>=0;i--)
        {
            printf("array[%d]: %d\n",i,array[i]);
        }
        /*-------  35. Insert/Delete value  ------*/
        printf("---------------------------- 35. Insert/Delete value  -------------------------\n");
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
        else
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
        /*-------  36. Sorted Array         ------*/
        printf("---------------------------- 36. Sorted Array  -------------------------\n");
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
        /*-------       Sum of Array       ------*/
        printf("----------------------------  Sum of Array  ----------------------------\n");
        for(i=0;i<size;i++)
        {
            sum+=array[i];
        }
        printf("Sum of array is: %d\n",sum);
    return 0;
}
