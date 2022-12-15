#include "main.h"
/**
 * print_numbers - function to print numbers 0 to 9
 *
 * Return: 0-9 followed by a new line
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar (i + '0');
		i++;
	}
	_putchar ('\n');
}
