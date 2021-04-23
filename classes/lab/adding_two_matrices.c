/* 2d array [row][column] */
// Code by @saicharankandukuri
/*
    for [3] [3] array
    _______________________________
   | Column  | 0      1       2    |
   |_________|_____________________|
   | Row 0   |                     |
   |_________|_____________________|
   |     1   |                     |
   |_________|_____________________|
   |     2   |                     |
   |_________|_____________________|
*/

#include <stdio.h>
void main(void) {
  int r, c, a[100][100], b[100][100], sum[100][100], i, j;
  printf("Enter the number of rows (between 1 and 100) \n :");
  scanf("%d", &r);
  printf("Enter the number of columns (between 1 and 100) \n :");
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }


  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }


  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }

}
