#include "main.h"
/**
 * factorial - return factorial of a given number
 * @n: paremeter of the factorial function
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	int result = 1;

	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return (result);
}
