#include "main.h"
/**
 * _strchr - a function that locates a character
 * @s: a string
 * @c: a string
 * Return: A pointer
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
