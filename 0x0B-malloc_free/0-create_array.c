#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * create_array -  function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: An unsigned integer
 * @c: char
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *) calloc(size, sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	memset(array, c, size);
	return (array);
}
