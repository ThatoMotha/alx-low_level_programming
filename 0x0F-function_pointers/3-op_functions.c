#include "3-calc.h"
/**
 * op_add - return the sum of 2 numbers
 * @a: int
 * @b: int
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a +b);
}

/**
 * op_sub - returns difference of 2 numbers
 * @a: int
 * @b: int
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of two numbers
 * @a:int
 * @b: int
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the quotient of 2 numbers 
 * @a: int
 * @b: int
 * Return: quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - retuns the remainder of division
 * @a: int
 * @b: int
 * Return: remainder
 */
int op_mod(int a,int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
