#include "main.h"
#include <stdlib.h>

/**
 * str_concat - main - check the code for ALX School students.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int m, n, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (m = 0; s1[m] != '\0'; m++)
		;

	for (n = 0; s2[n] != '\0'; n++)
		;

	strout = malloc(sizeof(char) * (m + n + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (k = 0; k < m; k++)
		strout[k] = s1[k];

	l = n;
	for (n = 0; n <= l; k++, n++)
		strout[k] = s2[n];

	return (strout);
}
