#include "main.h"
#include <string.h>
/**
 * puts2 - function that prints every other character of a string
 * @str: str parameter
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
