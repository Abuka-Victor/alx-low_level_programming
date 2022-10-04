#include "search_algos.h"

/**
 * logger - the function to print what part of the
 * array we are currently searching
 * @array: the array
 * @start: our start
 * @stop: Our stop
 *
 * Return: Null Void
 */

void logger(int *array, size_t start, size_t stop)
{
	size_t i;

	printf("Searching in array:");
	for (i = start; i <= stop; i++)
	{
		if (i != stop)
			printf(" %d,", array[i]);
		else
			printf(" %d\n", array[i]);
	}
}

/**
 * search - the actual search algo
 * @array: The array to be searched
 * @start: the start value
 * @stop: the stop value
 * @value: the value to be searched for
 *
 * Return: The index of the value or -1
 */

int search(int *array, size_t start, size_t stop, int value)
{
	size_t mid;

	logger(array, start, stop);
	mid = ((stop - start) / 2) + start;
	if (array[mid] == value)
		return (mid);

	if (start == stop)
		return (-1);

	if (array[mid] > value)
	{
		return (search(array, start, mid - 1, value));
	}
	return (search(array, mid + 1, stop, value));
}

/**
 * binary_search- A function to implement the binary search algorithm
 * @array: The array to be searched
 * @size: the size of the array
 * @value: the value to be found in the array
 *
 * Return: the index where the value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t stop = size - 1;

	if (!array)
		return (-1);

	return (search(array, start, stop, value));
}
