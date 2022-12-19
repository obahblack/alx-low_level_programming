#include "main.h"
/**
 * swap_int - a function that swaps the values of two intergers
 * @a: one interger
 * @b: second interger
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
