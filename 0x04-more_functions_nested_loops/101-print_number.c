#include "main.h"
#include <stdio.h>

/**
 * print_number - Write a function that prints an integer with putchar
 * @n: This is my number to print
 *
 */
void print_number(int n)
{
	unsigned int n2, n1 = n;
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		n1 = n * -1;
	}
	n2 = n1;
	while (n2 > 9)
	{
		dv *= 10;
		n2 = n2 / 10;
	}
	while (dv >= 1)
	{
		n2 = n1 % div;
		n1 /= dv;
		_putchar(n1 + '0');
		n1 = n2;
		dv /= 10;
	}
}
