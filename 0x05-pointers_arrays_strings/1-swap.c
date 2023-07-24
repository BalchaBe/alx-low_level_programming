#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * pointer to first value
 * pointer to second value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
