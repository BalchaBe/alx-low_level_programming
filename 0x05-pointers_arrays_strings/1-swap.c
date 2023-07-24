#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * pointer to first value
 * pointer to second value
 */
void swap_int(int *y, int *z)
{
	int c;

	c = *y;
	*y = *z;
	*z = c;
}
