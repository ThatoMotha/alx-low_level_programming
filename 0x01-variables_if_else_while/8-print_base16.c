#include <stdio.h>
#include <stdlib.h>
/**
 * Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
 * Return 0
 */
int main (void)
{
	char ch;
	for (ch = '0'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
