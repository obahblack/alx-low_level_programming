#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int abets = 'a';
	int ABETS = 'A';

	while (abets <= 'z')
	{
		putchar(abets);
		abets++;
	}
	while (ABETS <= 'Z')
	{
		putchar(ABETS);
		ABETS++;
	}
	putchar('\n');
	return (0);
}
