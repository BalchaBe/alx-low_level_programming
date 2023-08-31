#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int m, n;

	if (!b)
		return (0);

	ui = 0;

	for (m = 0; b[m] != '\0'; m++)
		;

	for (m--, n = 1; m >= 0; m--, n *= 2)
	{
		if (b[m] != '0' && b[m] != '1')
		{
			return (0);
		}

		if (b[m] & 1)
		{
			ui += n;
		}
	}

	return (ui);
}
