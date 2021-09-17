#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print diagram sum
 * @a: input string
 * @size: input character
 *
 * Description: prints the sum of the two diagonals of a
 * square matrix of integers
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	 int i = 0, x_sum = 0, y_sum = 0;

	 while (i < size)
		 x_sum += a[size - i][size - i], y_sum += a[i][size - i];
	 printf("%d, %d", x_sum, y_sum);

	
}
