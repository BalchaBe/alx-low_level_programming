#include "main.h"
#include <stdio.h>

/**
 * print_number - prints a number
 * Input number
 */

void print_number(int n)
{
	long x, y, i, temp, expo;

	y = n;
	expo = x =  1;
	if (y < 0)
	{
		y *= -1;
		_putchar('-');
	}

	temp = y;
	while (temp >= 10)
	{
		x++;
		temp /= 10;
	}

/* Exponent*/
	for (i = 1; i < x; i++)
		expo *= 10;
/*Main */
	while (expo > 1)
	{
		_putchar((y / expo) % 10 + '0');
		expo /= 10;
	}
	_putchar(y % 10 + '0');
}
