#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *chr;
	unsigned int m;

	if (size == 0)
		return (NULL);

	chr = malloc(sizeof(c) * size);

	if (chr == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		chr[m] = c;

	return (chr);
}
