#include "main.h"
/**
 * print_rev - print a string in reverse followed by new line
 * @s: pointer to the string to print
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
