#include "main.h"
/**
 * _memcpy - function that copies n bytes from memory src to dest
 * @dest: destination
 * @src: memory area
 * @n: interger
 * Return: destination Dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
