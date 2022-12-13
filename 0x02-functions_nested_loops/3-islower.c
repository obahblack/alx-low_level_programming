#include "main.h"

/**
 * int _islower - Entry point 
 *
 * Return: 1 if letter is lowercase, return 0 for othherwise"
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
