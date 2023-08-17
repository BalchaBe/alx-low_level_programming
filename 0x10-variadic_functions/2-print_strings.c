#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int m;
	char *c;

	va_start(v, n);

	for (m = 0; m < n; m++)
	{
		c = va_arg(v, char *);

		if (c)
			printf("%s", c);
		else
			printf("(nil)");

		if (m < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(v);
}
