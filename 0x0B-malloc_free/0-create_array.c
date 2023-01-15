#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: unsigned integer
 * @c: char
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *array = (char *) malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
