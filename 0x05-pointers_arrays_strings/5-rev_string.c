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
	char ret[_strlen(s)];
	int ret_index;

	for (ret_index = 0, track = _strlen(s) - 1; track >= 0; track--)
	{
		ret[ret_index] = *(s + track);
		ret_index++;
	}

	*s = ret;
}
