#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 *
 * @a: the 2d square array
 * @size: the size of the square array
 */
void print_diagsums(int *a, int size)
{
        /* int row, col_in = 0, col_end = size - 1; */

        int pos, sum1, sum2 = 0;

        for (pos = 0; pos < size; pos++)
        {
                sum1 += a[(size + 1) * pos];
                sum2 += a[(size - 1) * (pos + 1)];
        }


        /*
        sum1 += a[row][col_in];
        sum2 += a[row][col_end];

        col_end--;
        col_in++;
        row++;
        */

        printf("%d, %d\n", sum1, sum2);

}

