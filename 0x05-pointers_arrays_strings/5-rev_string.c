#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverses a string in a variable
 * @s: this is a string
 *
 * Return: Null void
 */
void rev_string(char *s)
{
	int track;
	int index = 0;
	char backup_str[500];

	while(*s)
	{
		backup_str[index] = *(s + index);
		index++;
	}
	backup_str[index + 1] = '\0';

	for (index = 0, track = _strlen(s) - 1; track >= 0; track--)
	{
		*(s + index) = *(backup_str + track);
		index++;
	}
}
