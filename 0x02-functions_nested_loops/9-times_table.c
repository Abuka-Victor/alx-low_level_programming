#include "main.h"

/**
 * times_table - Prints times table
 *
 * Return; Null Void
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			product += 48;
			_putchar(product);
			if (j == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
	}
}
