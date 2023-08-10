#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int m, k, l, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (m = 0; s1[m] != '\0'; m++)
		;

	for (k = 0; s2[k] != '\0'; k++)
		;

	if (n > k)
		n = k;

	l = m + n;

	p = malloc(l + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		if (i < m)
			p[i] = s1[i];
		else
			p[i] = s2[i - m];

	p[i] = '\0';

	return (p);
}
