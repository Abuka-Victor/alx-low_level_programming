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
		_putchar(n);
		return (n);
	}
	else if (n < 0)
	{
		n *= -1;

		while (n > 9)
		{
			n %= 10;
		}
		_putchar(n); 
		return (n);
	}
	else
	{
		_putchar(n); 
		return (0);
	}
}
