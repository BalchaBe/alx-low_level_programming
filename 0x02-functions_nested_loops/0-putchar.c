#include "main.h"
/**
 * main - prints the string "main" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
	char c[] = "main";
	int k;

	for (k = 0; k < 4; k++)
	{
		_putchar(c[k]);
	}
	_putchar('\n');
	return (0);
}
