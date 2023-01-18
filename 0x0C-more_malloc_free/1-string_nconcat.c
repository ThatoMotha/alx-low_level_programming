#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: an integer value
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
if (!s1)
	s1 = "";
if (!s2)
	s2 = "";

int len1 = strlen(s1);
int len2 = strlen(s2);

if (n >= len2)
	n = len2;

char *concat = malloc(len1 + n + 1);

if (!concat)
	return (NULL);

for (int i = 0; i < len1; i++)
{
	concat[i] = s1[i];
}
for (int i = 0; i < n; i++)
{
	concat[i + len1] = s2[i];
}
concat[len1 + n] = '\0';
return (concat);
}
