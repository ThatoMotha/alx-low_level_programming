#include "main.h"
/**
 * _sqrt_recursion - function that returns
 * the natural square root of a number
 * @n: is the squar
 * Return: -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}

	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0 && n / i == i)
		{
			return (i);
		}
	}
	return (-1);
}
