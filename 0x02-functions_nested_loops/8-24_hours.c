#include "main.h"

/**
 * jack_bauer - prints 00:00 to 23:59
 *
 * Return: Just prints
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 59; j++)
		{
			if (i < 9 && j < 9)
			{
				_putchar('0');
				_putchar(i);
				_putchar(':');
				_putchar('0');
				_putchar(j);
			}
			else if (i > 9 && j > 9)
			{
				_putchar(i);
				_putchar(':');
				_putchar(j);
			}
			else if (i < 9 && j > 9)
			{
				_putchar('0');
				_putchar(i);
				_putchar(':');
				_putchar(j);
			}
			else if (j < 9 && i > 9)
			{
				_putchar(i);
				_putchar(':');
				_putchar('0');
				_putchar(j);
			}
		}
	}
}
