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
	char *start = s;
	char *end = s + len - 1;

	while (start < end)
	{
		if (*start != *end)
		{
			return (0);
		}
		start++;
		end--;
	}
	return (1);
}
