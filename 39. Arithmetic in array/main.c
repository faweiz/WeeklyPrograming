// C:Weekly programming 39. Arithmetic in 2D Array Matrices
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 5/6/2015
// This program add, subtract, multiple, divide and Transpose in 2D Array Matrices

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,column,i,j,array1[10][10],array2[10][10],sum[10][10],difference[10][10],multiply[10][10],divide[10][10];

    printf("Enter the number of the rows and columns in '1st' 2D array: \n");
    scanf("%d %d",&row,&column);

    // Use the infinite while loop to check if the row and column is greater than 0
    while(1)
    {
        if(row>10 || column>10)
        {
            printf("The max elements in 2D array is 10 x 10 \n");
            printf("Please Re-enter the rows and columns for '1st' 2D array: \n");
            scanf("%d %d",&row,&column);
            printf("\n");
        }
        else // Use the break to jump out of the while loop if row and column is less than 10
        {
            break;
        }
    }
/*
    printf("Enter the number of the rows and columns for '2nd' 2D array: \n");
    scanf("%d %d",&row,&column);

     while(1)
     {
        if(row>10 || column>10)
        {
            printf("The max elements in 2D array is 10 x 10 \n");
            printf("Please Re-enter the rows and columns for '2nd' 2D array: \n");
            scanf("%d %d",&row,&column);
            printf("\n");
        }
        else
        {
            break;
        }
     }
 */

    /* Now, let user enter the value of elements into 2 matrix */
    printf("Enter the value for '1st' 2D array matrix: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&array1[i][j]);
        }
    }
    printf("Enter the value for '2nd' 2D array matrix: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",&array2[i][j]);
        }
    }

    /*------------------------- Sum (Addition) -------------------------*/
    printf("Sum of the matrices: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            sum[i][j] = array1[i][j] + array2[i][j];
            printf("%d \t",sum[i][j]);
        }
        printf("\n");
    }
    /*------------------------- Difference (Subtraction) -------------------------*/
    printf("Difference of the matrices: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            difference[i][j] = array1[i][j] - array2[i][j];
            printf("%d \t",difference[i][j]);
        }
        printf("\n");
    }
    /*------------------------- Multiply  -------------------------*/
    printf("Multiplication of the matrices: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            multiply[i][j] = array1[i][j] * array2[i][j];
            printf("%d \t",multiply[i][j]);
        }
        printf("\n");
    }
    /*------------------------- Divide    -------------------------*/
        printf("Division of the matrices: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            divide[i][j] = array1[i][j] % array2[i][j];
            printf("%d \t",divide[i][j]);
        }
        printf("\n");
    }
    /*------------------------- Transpose  -------------------------*/
    int transpose1[10][10],transpose2[10][10];
    // 1st 2D Array Transpose
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            transpose1[j][i] = array1[i][j];
        }
    }
    printf("Transpose for 1st 2D array: \n");
    for(i=0;i<column;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d \t",transpose1[i][j]);
        }
        printf("\n");
    }
    // 2ND 2D Array Transpose
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            transpose2[j][i] = array2[i][j];
        }
    }
    printf("Transpose for 2nd 2D array: \n");
    for(i=0;i<column;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d \t",transpose2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
