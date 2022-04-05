#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}

int main(void)
{
	char **tab;

	tab = strtow("      Holberton School         #cisfun      ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}
