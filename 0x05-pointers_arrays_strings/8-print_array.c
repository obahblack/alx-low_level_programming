#include "main.h"
#include <stdio.h>
/**
 * print_array - to print a n number of array of int
 * @a: input array
 * @n: input n elemrnt
 *
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
