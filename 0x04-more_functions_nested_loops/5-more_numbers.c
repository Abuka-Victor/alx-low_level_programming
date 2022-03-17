#include "main.h"

/**
 * more_numbers - Prints 0-14 10 times
 * Return: Nothing (Null Void)
 */
void more_numbers(void)
{
	int j;
	int i = 0;

	while (i < 10)
	{
		char *s = "01234567891011121314";

		for (j = 0; j <= 19; j++)
		{
			putchar(s[j]);
		}
		_putchar('\n');
		i++;
	}
}
