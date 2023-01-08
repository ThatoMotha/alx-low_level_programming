#include "main.h"
#include <string.h>
/**
 * is_palindrome - function that returns 1 if a string is a
 *  palindrome and 0 if not
 *  @s: pointer to string
 *  Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
	{
		return (1);
	}

	for (int i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			return (0);
		}
	}
	return (1);
}
