#include "main.h"
#include <stddef.h>
/**
 * _strchr - searches for a specific character
 * within a null-terminated string
 * @s: pointer to the string to search
 * @c: the character to search for
 * Return: a pointer to the first occurrence of the character
 * within the string,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
