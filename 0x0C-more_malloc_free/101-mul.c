#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - This prints multiplication of 2 numbers
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	unsigned long num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 == 0 || num2 == 0)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		printf("%ld\n", num1 * num2);
	}

	return (0);
}
