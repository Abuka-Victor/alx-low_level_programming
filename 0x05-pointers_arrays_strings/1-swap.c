#include "main.h"


/**
 * swap_int - This changes the positions of the values
 * @a: This is a pointer to the first value
 * @b: This is a pointer to the second value
 *
 * Return: Null void
 */
void swap_int(int *a, int *b)
{
	int hold = *a;
	*a = *b;
	*b = hold;
}
