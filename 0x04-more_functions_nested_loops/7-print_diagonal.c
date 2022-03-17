#include "main.h"

/**
 * print_diagonal - Prints '\' n times
 * @n: n is an integer specifying how many
 * times \ is printed
 *
 * Return: Null Void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
		_putchar('\n');
	}
}
