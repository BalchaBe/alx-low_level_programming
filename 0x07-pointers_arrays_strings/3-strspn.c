#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
int m, n, k, l;

	f = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		l = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[m] == accept[n])
			{
				k++;
				l = 1;
			}
		}
		if (l == 0)
		{
			return (k);
		}
	}

	return (0);
}
