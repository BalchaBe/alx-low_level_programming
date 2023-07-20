#include "main.h"

/**
  * - Print 10 times the numbers since 0 up to 14
  *
  * Return 0 up to 14
  */
void more_numbers(void)
{
	int b, y;

	for (b = 0; b < 10; b++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}

			_putchar((y % 10) + '0');
		}

		_putchar('\n');
	}
}
