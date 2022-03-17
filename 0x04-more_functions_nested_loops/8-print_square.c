#include "main.h"

/**
 * print_square - Prints # square of size size
 * @size: n is an integer specifying how many
 * times # is printed
 *
 * Return: Null Void
 */
void print_square(int size);
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
