#include "main.h"

/**
 * _isalpha - checks for char alphabet
 * @c: is the char to be checked
 *
 * Return: 1 if the char is lower or upper, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}
