#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (succes)
 */
void print_alphabet_x10(void)
{
	int ten;
	char c;

	for (ten = 0; ten <= 9; ten++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
			_putchar('\n');
		}
	}
}
