#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: pointer to destinaton
 * @src: pointer to source
 * Return: pointer to the resulting string destination
 */
char *_strcat(char *dest, char *src)
{
	int a = -1, i;

	for (i = 0; dest[i] != '\0')
		i++;

	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\0');

	return (dest);
}
