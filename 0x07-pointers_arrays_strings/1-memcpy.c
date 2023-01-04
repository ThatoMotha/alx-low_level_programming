#include "main.h"
/**
 * _memcpy -  function copies n bytes from memory area src
 * to memory area dest
 * @dest: pointer to memory area where data will be copied to
 * @src: pointer to memory area where data will be pointed from
 * @n: number of blocks to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
