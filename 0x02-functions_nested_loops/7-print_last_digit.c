#include "main.h"

/**
 * print_last_digit - Prints the last digit of any value
 * @n: This is a real number
 *
 * Return: Last value of digit
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		while (n > 9)
		{
			n %= 10;
		}
		return (n);
	}
	else if (n < 0)
	{
		n *= -1;

		while (n > 9)
		{
			n %= 10;
		}
		return (n);
	}
	else
	{
		return (0);
	}
}
