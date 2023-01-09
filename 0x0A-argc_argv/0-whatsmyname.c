#include "main.h"
#include <stdio.h>
/**
 * main - main block
 * Write a program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *program_name = argv[0];

	printf("%s\n", program_name);
	return (0);
}
