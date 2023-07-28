#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer.
 * @size: size of buffer.
 * Return: no return.
 */
void print_buffer(char *b, int size)
{
	int m, n, k;

	if (size <= 0)
		printf("\n");
	else
	{
		for (m = 0; m < size; m += 10)
		{
			printf("%.8x:", m);
			for (n = m; n < m + 10; n++)
			{
				if (n % 2 == 0)
					printf(" ");
				if (n < size)
					printf("%.2x", *(b + n));
				else
					printf("  ");
			}
			printf(" ");
			for (k = m; k < m + 10; k++)
			{
				if (k >= size)
					break;
				if (*(b + k) < 32 || *(b + k) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + k));
			}
			printf("\n");
		}
	}
}
