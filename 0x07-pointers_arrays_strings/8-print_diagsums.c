#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array to be printed
 * @size: size of a
 */
void print_diagsums(int *a, int size)
{
	int m, n, sum = 0;

	for (m = 0; m < size; m++)
		sum += *(a + m * size + m);
	printf("%m, ", sum);
	sum = 0;
	for (n = 0; n < size; n++)
		sum += *(a + size * (n + 1) - (n + 1));
	printf("%m\n", sum);
}
