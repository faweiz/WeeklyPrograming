// C:Weekly programming 38. 2D Array (int_float_char)
// https://github.com/faweiz
// https://portfolium.com/faweiz
// https://www.linkedin.com/in/faweiz
// Designer: Fawei Zhang
// Date: 5/7/2015
// 2D Array type for int, float and char

#include <stdio.h>
#include <stdlib.h>

int main()
{
        int array1[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}}; // 3 row 4 column
      float array2[3][4] = {{1.1, 1.2, 1.3, 1.4},
                            {2.1, 2.2, 2.3, 2.4},
                            {3.1, 3.2, 3.3, 3.4}};
       char array3[2][5] = {{'H','e','l','l','o'}, // 2 row 5 column
                            {'w','o','r','l','d'}};
                          //  {'I Love You!'},
                           // {'You are so beautiful!'}};

      int i,j; // i: row, j: column
      printf("Int Type (2D Array): \n");
      for(i=0;i<3;i++)
      {
          for(j=0;j<4;j++)
          {
              printf("%d \t",array1[i][j]); // to make matrix look like use the /t in for (j...)
          }
          printf("\n"); // and skip a new line for the for(i...)
      }
      printf("\nFloat Type (2D Array): \n");
      for(i=0;i<3;i++)
      {
          for(j=0;j<4;j++)
          {
              printf("%.2f \t",array2[i][j]);
          }
          printf("\n");
      }
      printf("\nChar Type (2D Array): \n");
      for(i=0;i<2;i++)
      {
          for(j=0;j<5;j++)
          {
              printf("%c",array3[i][j]);
          }
          printf("\n");
      }
    return 0;
}
