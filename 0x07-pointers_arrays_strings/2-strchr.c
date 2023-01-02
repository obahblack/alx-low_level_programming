#include "main.h"
/**
 * _strchr - a function that locates a character
 * @s: a string
 * @c: a string
 * Return: A pointer
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
		a++;
	for (b = 0; b < a; b++)
	{
		if (c == s[b])
			s += b;
		return (s);
	}
	return ('\0');
}
