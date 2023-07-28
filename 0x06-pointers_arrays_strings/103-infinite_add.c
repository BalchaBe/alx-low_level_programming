#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, m, n, k, l, add = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	if (i >= j)
		n = i;
	else
		n = j;
	if (size_r <= n + 1)
		return (0);
	r[n + 1] = '\0';
	i--, j--, size_r--;
	k = *(n1 + i) - 48, l = *(n2 + j) - 48;
	while (n >= 0)
	{
		m = k + l + add;
		if (m >= 10)
			add = m / 10;
		else
			add = 0;
		if (m > 0)
		*(r + n) = (m % 10) + 48;
		else
			*(r + n) = '0';
		if (i > 0)
			i--, k = *(n1 + i) - 48;
		else
			k = 0;
		if (j > 0)
			j--, l = *(n2 + j) - 48;
		else
			l = 0;
		n--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
