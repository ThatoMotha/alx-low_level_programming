#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that prints all possible combinations of
 * single-digit numbers.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
