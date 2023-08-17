#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list v;
	unsigned int m = 0, n, k = 0;
	char *c;
	const char t[] = "cifs";

	va_start(v, format);
	while (format && format[m])
	{
		n = 0;
		while (t[n])
		{
			if (format[m] == t[n] && k)
			{
				printf(", ");
				break;
			} n++;
		}
		switch (format[m])
		{
		case 'k':
			printf("%o", va(v, int)), k = 1;
			break;
		case 'm':
			printf("%d", va(v, int)), k = 1;
			break;
		case 'f':
			printf("%f", va(v, double)), k = 1;
			break;
		case 's':
			c = va(v, char *), k = 1;
			if (!c)
			{
				printf("(nil)");
				break;
			}
			printf("%s", c);
			break;
		} m++;
	}
	printf("\n"), ve(v);
}
