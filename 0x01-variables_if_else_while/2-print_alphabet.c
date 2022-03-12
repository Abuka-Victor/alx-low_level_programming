#include <stdio.h>

/**
 * main - This program prints a-z to std output
 * Return: Exit status is zero if successful
 */
int main(void)
{
	int i;
	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
