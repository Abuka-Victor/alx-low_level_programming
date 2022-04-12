#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int main(void)
{
	struct dog my_dog;

	my_dog.name = NULL;
	my_dog.age = 3.5;
	my_dog.owner = NULL;
	print_dog(&my_dog);
	return (0);
}
