#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	dup = malloc(strlen(str) + 1);

	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);

	return (dup);
}
