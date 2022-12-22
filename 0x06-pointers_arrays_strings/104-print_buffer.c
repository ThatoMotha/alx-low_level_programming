#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints content of a inputted number
 * of bytes from a buffer
 *  print 10 bytes per line
 *  Each line starts with the position of the
 *  first byte of the line in hexadecimal (8 chars),
 *  starting with 0
 *  Each line shows the hexadecimal content (2 chars) of the buffer,
 *  2 bytes at a time, separated by a space
 *  Each line shows the content of the buffer
 *   If the byte is a printable character, print the letter, if not, print .
 * Each line ends with a new line \n
 * If size is 0 or less, the output should be a new line only \n
 * @b: number of bytes
 * @size: size of the byte
 */
void print_buffer(char *b, int size)
{
	int i = 0, j;

	if (size < 0)
	{
		printf('\n');
		return;
	}

	while (i < size)
	{
		if (i % 10 == 0)
			printf("%08x: ", i);
		for (j = i; j < i + 9; j += 2)
		{
			if ((j < size) && ((j + 1) < size))
				printf("%02x%02x: ", b[j], b[j + 1]);
			else
			{
				while (++j < = i + 10)
					printf(" ");
				printf(" ");
			}
		}
		for (j = i; j < i + 9 && j < size; j++)
		{
			if (b[j] > +32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf('\n');
		i += 10;
	}
}
