#include "main.h"
/**
 * _sqrt_recursion - function that returns
 * the natural square root of a number
 * @n: is the squar
 * Return: -1
 */
int _sqrt_recursion(int n)
{
	if (n <= 1)
	{
		return (n);
	}
	if (n == _sqrt_recursion(n - 1) * _sqrt_recursion(n - 1))
	{
		return (n - 1);
	}
	else
	{
		return (-1);
	}
}
