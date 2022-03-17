#include "main"

/**
 * print_alphabet - Prints a-z in lowercase
 * Return: Nothing (Null Void)
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');
}
