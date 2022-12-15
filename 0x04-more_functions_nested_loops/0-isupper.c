#include "main.h"
/**
 * _isupper(int c) - checkeseckes upper case
 * @c: print int
 * Returnn: give 1 or 0
 */

int _isupper(int c)
{
	if ( c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
