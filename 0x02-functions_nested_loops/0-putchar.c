#include "main.h"
/**
 * main - prints the string "mainfunct" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
	char c[] = "mainfunct";
	int k;

	for (k = 0; k < 8; k++)
	{
		_putchar(c[k]);
	}
	_putchar('\n');
	return (0);
}
