#include "search_algos.h"

/**
 * linear_search - A function to implement the linear search algo
 * @array: the array to be searched
 * @size: The size of the array
 * @value: The value to be found
 *
 * Return: an int of the index it finds the number else 0
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
