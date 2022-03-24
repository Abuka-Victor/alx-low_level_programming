#include "main.h"

/**
 * print_number - Prints a passed number to stdout
 * @n: This is the number to be printed
 *
 * Return: Null Void
 */
void print_number(int n)
{
	int decimalNos = 1, keep, m;

	if (n < 0)
	{
		_putchar(45);
		keep = n * -1;
	}
	else
	{
		keep = n;
	}

	keep = m;

	while (keep > 9)
	{
		keep /= 10;
		decimalNos *= 10;
	}

	while (decimalNos > 0)
	{
		_putchar(((m / decimalNos) % 10) + 48);
		decimalNos /= 10;
	}
	_putchar('\n');
}
