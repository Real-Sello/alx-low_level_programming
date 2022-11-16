#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds functions
 * @a: input one
 * @b: input two
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts inputs
 * @a: input one
 * @b: input two
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies inputs
 * @a: input one
 * @b: input two
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides inputs
 * @a: input one
 * @b: input two
 * Return: result of division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets input division remainder
 * @a: input one
 * @b: input two
 * Return: division remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
