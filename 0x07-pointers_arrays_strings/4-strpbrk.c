#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function searches the string pointed to by s,
 * for any of the bytes specified in the string pointed to by accept.
 * @s: a pointer to a null-terminated string
 * @accept: pointer to a null-terminated string containing a list of bytes
 * Returns: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
