#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int m, k, p;

	k = n - 1;

	for (m = 0; m < n / 2; m++)
	{
		p = a[m];
		a[m] = a[k];
		a[k--] = p;
	}
}
