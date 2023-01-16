#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1:pointer to first string
 * @s2:pointer to second string
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1, len2;

	if (!s1)
	{
		s1 = "";
	}

	if (!s2)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	result = (char *)malloc(len1 + len2 + 1);

	if (!result)
	{
		return (NULL);
	}
	memcpy(result, s1, len1);
	memcpy(result + len1, s2, len2);
	result[len1 + len2] = '\0';
	return (result);
}
