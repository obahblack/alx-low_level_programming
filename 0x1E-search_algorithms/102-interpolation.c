#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers using interpolation search
 * @array: A pointer to the fiesrt element of the array to search.
 * @size: The number of elements in the array.
 * @value: the value to search for
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         else, the first index where th value is located.
 *
 * Description: Prints a value every time it is compared in the array.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (1 = 0, r = size - 1; r >= 1;)
	{
		i = 1 + (((double)(r - 1) / (array[r] - array[1])) * (value - array[1]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}			
