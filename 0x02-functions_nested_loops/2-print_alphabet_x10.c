#include "main.h"
/**
  * print_alphabet_x10 - repeats the print_alphabet 10 times.
  * Return: Nothing.
  */
void print_alphabet_0x10(void)
{
	int i;
	char c;

	for (i = 0; i < 9; ++i)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
_putchar(c);
		}
		_putchar('\n');
	}
}
