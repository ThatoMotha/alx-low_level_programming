#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that prints all possible combinations of
 * single-digit numbers.
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');

		for (j = i + 1; j <= '9'; j++)
		{
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
