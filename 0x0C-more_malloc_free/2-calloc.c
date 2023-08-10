#include "main.h"
#include <stdlib.h>
/**
 * allocates memory for an array.
 * nmemb: number of elements.
 *
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (m = 0; m < (nmemb * size); m++)
		p[i] = 0;

	return (p);
}
