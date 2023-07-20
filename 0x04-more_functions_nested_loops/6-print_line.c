#include "main.h"

/**
  * Draws a straight line according to parameter
  * 
  * Return: empty
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
			_putchar(101);
		}

		_putchar('\n');
	}
}
