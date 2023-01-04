#include "main.h"
/**
 * _puts_recursion - a function that prints a strin followed by a new line
 * @s: string
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	s = "praise\0";
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
