#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: this is a string
 *
 * Return: Null void
 */
void _puts(char *str)
{
	int track;

	for (track = 0; *(s + track) != '\0'; track++)
	{
		_putchar(*(s + track));
	}

	_putchar('\n');
}
