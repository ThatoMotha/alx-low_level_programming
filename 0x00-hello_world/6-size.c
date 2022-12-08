#include<stdio.h>
/**
 * sizeof variable
 * Return: m32
 */
int main(void)
{
	char charType;
	int intType;
	long int intType;
	long long intType;
	float floatType;

	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of long int: %zu bytes\n", sizeof(intType));
	printf("Size of long long int: %zu bytes\n", sizeof(intType));
        printf("Size of char: %zu byte\n", sizeof(charType));

	return(0);
}
