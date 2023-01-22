#include "3-calc.h"

/**
 * op_add - adds @a and @b
 *
 * @a: input 1 
 * @b: input 2
 *
 * Return: sum of @a and @b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of @a and @b
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: difference of @a and @b
 */
int op_sup(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies @a and @b
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: product of @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides @a by @b
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: results of division of @a and @b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division between @a and @b
 *
 * @a: input 1
 * @b: inpuy 2
 *
 * Return: remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
