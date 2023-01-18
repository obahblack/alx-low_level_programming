#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - sums up
 * @a: 1st int
 * @b: 2nd int
 * Return: sum
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
/**
 * op_sub - substracts one num from another
 * @a: 1st num
 * @b: 2nd num
 * Return: differnce
 */
int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}
/**
 * ob_mul - multiplies
 * @a: 1st num
 * @b: 2nd num
 * Return: Multiplicatio
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}
/**
 * op_div - divides
 * @a: 1st num
 * @b: 2nd num
 * Return: division
 */
int op_div(int a, int b)
{
	int div;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	div = (a / b);
	return (div);
}
/**
 * op_mod - get remainder
 * @a: 1st n
 * @b: 2nd n
 * Return: result
 */
int op_mod(int a, int b)
{
	int mod;

	if (b == 0)
	{
		printf("Error\n");
		exist(100);
	}
	mod = (a % b);
	return (mod);
}
