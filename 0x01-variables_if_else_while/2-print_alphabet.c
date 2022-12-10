#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int low = "a";

	while (low <= "z")
	{
		putchar(low);
		low++;
	}
	putchar("\n");
	return (0);
