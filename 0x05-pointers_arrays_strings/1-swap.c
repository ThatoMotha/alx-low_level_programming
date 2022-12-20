#include "main.h"
/**
 * swap_int - swap variable valude
 * @a:pointera
 * @b:pointerb
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
