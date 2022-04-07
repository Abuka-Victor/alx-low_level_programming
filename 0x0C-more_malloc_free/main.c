#include "main.h"
#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 35);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
