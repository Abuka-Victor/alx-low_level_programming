#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - prints a string to stdout in reverse
 * @s: this is a string
 *
 * Return: Null void
 */
void print_rev(char *s)
{
	int track;


	for (track = _strlen(s); track >= 0; track--)
	{
		_putchar(*(s + track));
	}
}
