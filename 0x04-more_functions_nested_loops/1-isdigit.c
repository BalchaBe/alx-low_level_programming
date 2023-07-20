#include "main.h"

/**
 * _- checks for digits 1-9
 * to check.
 * Return: 1 if c is a digit, otherwise return 0.
 */
int _isdigit(int b)
{
	if (b >= '0' && b <= '9')
		return (1);
	else
		return (0);
}
