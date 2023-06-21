#include "3-calc.h"

/**
 * op_add - add operation
 * @a: first number
 * @b: second number
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract operation
 * @a: first number
 * @b: second number
 * Return: difference of the two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operation
 * @a: first number
 * @b: second number
 * Return: result of the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operation
 * @a: first number
 * @b: second number
 * Return: result of the division
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (100);
	return (a / b);
}

/**
 * op_mod - modulo operation
 * @a: first number
 * @b: second numeber
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (100);
	return (a % b);
}
