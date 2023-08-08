#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int m, n, k, l;

	if (ac == 0)
		return (NULL);

	for (m = n = 0; n < ac; n++)
	{
		if (av[n] == NULL)
			return (NULL);

		for (k = 0; av[n][k] != '\0'; k++)
			c++;
		c++;
	}

	a = malloc((m + 1) * sizeof(char));

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (n = k = l = 0; l < c; k++, l++)
	{
		if (av[n][k] == '\0')
		{
			a[l] = '\n';
			n++;
			l++;
			k = 0;
		}
		if (l < m - 1)
			a[l] = av[n][k];
	}
	a[l] = '\0';

	return (a);
}
