#include "main.h"

/**
 * main - program to print putchar to the screen
 * Return: exit status is zero if successful
 */
int main(void)
{
	char text[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
