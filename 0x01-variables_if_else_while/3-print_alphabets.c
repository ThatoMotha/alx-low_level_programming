#include <stdio.h>
/**
 * main - main block
 * Print the alphabet in lower case
 * and the in uppercase, with a new line
 * Return:0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
