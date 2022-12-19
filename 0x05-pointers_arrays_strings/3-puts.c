#include "main.h"
/**
 * _puts - a function that print a string followed by a new line, to stdout
 * @str :string
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
