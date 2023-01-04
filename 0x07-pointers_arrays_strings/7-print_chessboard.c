#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: a list of lists of strings
 * Return: None
 */
void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			_putchar(' ');
		}
			_putchar('\n');
	}
}
