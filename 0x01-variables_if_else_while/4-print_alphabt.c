#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Alwats 0 (success)
 */

int main(void)
{
	int al = 'a';

	while
		(al <= 'z')
		{
			if ((al != 'e' && al != 'q') && al <= 'z')
				putchar(al);
			al++;
		}
	putchar('\n');
	return (0);
}

