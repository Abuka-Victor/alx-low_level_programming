#include <stdio.h>

/**
 * main - A program that prints its name
 * @argc: Argument count
 * @argv: Argument Vector
 *
 * Return: Always 0
 */

int main(int argc,  char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
