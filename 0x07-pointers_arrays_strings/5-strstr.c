#include "main.h"
#include <string.h>

/**
 * _strstr - locate a substring in a string
 * @haystack: the string to search in
 * @needle: the substring to search for
 * Find the first occurrence of the substring needle in the string haystack.
 * The terminating null bytes ('\0') are not compared.
 * Return: a pointer to the start of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

int haystack_len = strlen(haystack);
int needle_len = strlen(needle);

for (i = 0; i < haystack_len; i++)
{
	if (haystack[i] == needle[0])
	{
		for (j = 1; j < needle_len; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (j == needle_len)
		{
			return (&haystack[i]);
		}
	}
}
return (NULL);
}
