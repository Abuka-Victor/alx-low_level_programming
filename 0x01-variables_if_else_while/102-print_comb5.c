#include <stdio.h>

/**
 * main - This program prints all decimal
 * digits without using printf
 * Return: Exit status is zero if successful
 */
int main(void)
{
	int i;
	int j;
	int k;
	int n;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (k < i)
					continue;
				for (n = 48; n <= 57; n++)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(n);
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
