#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Print chess.
 * @a: an array of pointers of char
 */
void print_chessboard(char (*a)[8])
{
	int m, n;

	for (m = 0; m < 8; m++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[m][n]);
		_putchar('\n');
	}
}
