#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int m, k;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (m = 0; s[m] != '\0'; m++)
	{
		if (m == 0 && s[m] >= 'a' && s[m] <= 'z')
			s[m] -= 32;

		for (k = 0; k < 13; k++)
		{
			if (s[m] == spe[k])
			{
				if (s[m + 1] >= 'a' && s[m + 1] <= 'z')
				{
					s[m + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
