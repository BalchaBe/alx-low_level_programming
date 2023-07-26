#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m, k;

	m = 0;
	k = 0;

	while (dest[m] != '\0')
		m++;

	while (src[k] != '\0' && k < n)
	{
		dest[m] = src[k];
		m++;
		k++;
	}

	dest[m] = '\0';

	return (dest);
}
