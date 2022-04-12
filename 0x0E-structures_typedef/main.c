#include <stdio.h>
#include "dog.h"

int main(void)
{
	dog_t *my_dog;
	my_dog = new_dog("Poppy", 3.5, "Bob");
	print_dog(&my_dog);
	return (0);
}
