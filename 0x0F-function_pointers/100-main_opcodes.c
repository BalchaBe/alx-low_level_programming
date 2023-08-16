#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX students.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int m, b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (m = 0; m < b; m++)
	{
		printf("%02x", opc[m] & 0xFF);
		if (m != b - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
