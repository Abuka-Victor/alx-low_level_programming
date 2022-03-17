#include "main.h"

/**
 * print_line - Prints '_' n times
 * @n: n is an integer specifying how many
 * times _ is printed
 *
 * Return: Null Void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
