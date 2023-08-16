#include "3-calc.h"

/**
 * op_add - adds two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: add.
 */
int op_add(int m, int n)
{
	return (m + n);
}

/**
 * op_sub - subctracts two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: difference.
 */
int op_sub(int m, int n)
{
	return (m - n);
}

/**
 * op_mul - multiplies two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: multiplication.
 */
int op_mul(int m, int n)
{
	return (m * n);
}

/**
 * op_div - divides two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: division.
 */
int op_div(int m, int n)
{
	if (n == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (m / n);
}

/**
 * op_mod - calculates the module of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: remainder of the division.
 */
int op_mod(int m, int n)
{
	if (n == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (m % n);
}
