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
	int k_last;
	int n_last;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if ((i == 57) && (j == 57))
				break;
			for (k = 48; k <= 57; k++)
			{
				for (n = 48; n <= 57; n++)
				{
					if ((i == 48) && (j == 48))
					{
						if ((k == 48) && (n == 48))
							continue;
					}
					if (k < i)
					{
						k++;
						continue;
					}
					if ((k_last == 57) && (n_last == 57))
					{
						if ((j == 57))
						{
							k = i + 1;
							n = 48;
						}
						else
						{
							k = i;
							n = j + 1;
						}
					}
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(n);
					n_last = n;
					if ((i == 57) && (j == 56))
					{
						if ((k == 57) && (n == 57))
							break;
					}
					putchar(44);
					putchar(32);
				}
				k_last = k;
			}
		}
	}
	putchar('\n');
	return (0);
}
