#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all parameteres
 * @n: number parameteres passed
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int k = 0;
	va_list ap;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		k += va_arg(ap, int);
	}
	va_end(ap);
	return (k);
}
