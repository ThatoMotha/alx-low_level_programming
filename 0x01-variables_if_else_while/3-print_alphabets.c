#include <stdio.h>
/**
 * main - main block
 * Print the alphabet in lower case
 * and the in uppercase, with a new line
 * Return:0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	
	c ='A';
	
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
