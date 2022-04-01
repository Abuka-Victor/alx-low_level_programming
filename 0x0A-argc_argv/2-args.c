#include <stdio.h>

/**
 * main - A program that prints all its args
 * @argc: Argument count
 * @argv: Argument Vector
 *
 * Return: Always 0
 */

int main(int argc,  char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
