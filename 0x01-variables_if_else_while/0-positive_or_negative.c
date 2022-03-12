#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Prints number is negative or positive or zero
 * Return: exit status is zero if successful
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		if (n < 0)
		{
			printf("%d is negative\n", n);
		}
		else if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else
		{
			printf("%d is zero\n", n);
		}
		return (0);
}
