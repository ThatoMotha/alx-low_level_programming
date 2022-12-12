#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main -main block
 * Write a program that prints the lowercase alphabet in reverse, followed by a new line.
 * Return 0
 */
#include <stdio.h>



int main(void) 
{
	char c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
