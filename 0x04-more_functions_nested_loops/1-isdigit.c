#include <main.h>
/**
 * _isdigit - function to check for a digit
 * @c: checked character
 * Return: 1 if c is a digit and 0 for otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);

		return (0);
}
