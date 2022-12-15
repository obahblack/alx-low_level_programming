#include "main.h"
/**
 * print_line - functiion that draws a straight
 * @n: print int
 * Return: Always 0
 */
void print_line(int n)
{
	int i;

	for (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			putchar(95);
		}
		_putchar('_');
	}
	else
	{
		_putchar('\n');
	}
}
