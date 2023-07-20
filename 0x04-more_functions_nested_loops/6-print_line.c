#include "main.h"

/**
  * Draws a straight line according to parameter
  * 
  * Return: 0
  */
void print_line(int n)
{
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b < n; b++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
