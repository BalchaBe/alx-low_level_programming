#include "main.h"
#include <stdio.h>

/**
 * print a triangle using multiple terminal lines and #'s.
 * size: the height of the triangle.
 */
void print_triangle(int size)
{
	int x, count;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}
	for (x = 1; x <= size; x++)
	{
		for (count = size - x; count > 0; count--)
			_putchar(' ');
		for (count = x; count > 0; count--)
			_putchar('#');
		_putchar('\n');
	}
}
