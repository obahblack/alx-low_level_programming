#include <stdio.h>
/**
 * myStartupFun - prints string
 * Return: void
 */
void myStartupFun(void) __attribute__ ((constructor));
void myStartupFun(void)
{
	char *s;

	s = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	printf("%s", s);
}
