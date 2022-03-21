#include "main.h"
#include <stdio.h>
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
	char *backup_str = *s;

	for (track = _strlen(s) - 1; track >= 0; track--)
	{
		*(s + index) = *(backup_str + track);
		index++;
		printf("track: %d, index: %d\n", track, index);
	}
}
