#include "main.h"
/**
 * print_line - functiion that draws a straight
 * @n: print int
 * Return: Always 0
 */
void print_line(int n)
{
	int co;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
