#include "main.h"

/**
 * _strlen_recursion - Return length of a string
 * @s: The string
 *
 * Return: an int which is the length
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + strlen_recursion(*(s + 1)));
}
