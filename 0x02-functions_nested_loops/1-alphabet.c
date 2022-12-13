#include "main.h"
/**
 * print_alphabets - Entry point
 *
 * Return: Always 0 (succes)
 */

void print_alphabet(void)
{
	char c = 'a';

	while(c <= 'z'){
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
