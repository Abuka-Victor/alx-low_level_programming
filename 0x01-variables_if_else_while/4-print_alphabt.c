#include <stdio.h>

/**
 * main - This program selectively prints alphabets to the screen
 * Return: Exit status is zero if successful
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (!(i == 113 || i == 101))
			putchar(i);
	}
	putchar('\n');
	return (0);
}
