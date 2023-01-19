#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that multiplies two numbers
 * @argc: This is the argument count
 * @argv: This is the argument vector
 * Return: 0;
 */
{
	int index, multiplication;

	multiplication = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index = 1; index < argc; index++)
	{
		multiplication = multiplication * atoi(argv[index]);
	}
	printf("%d\n", multiplication);
	return (0);
}
