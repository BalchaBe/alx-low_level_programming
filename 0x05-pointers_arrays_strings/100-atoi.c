#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, k, f, t;

	i = 0;
	d = 0;
	n = 0;
	k = 0;
	f = 0;
	t = 0;

	while (s[k] != '\0')
		k++;

	while (i < k && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			t = s[i] - '0';
			if (d % 2)
				t = -t;
			n = n * 10 + t;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
