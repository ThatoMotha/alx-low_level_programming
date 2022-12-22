# include "main.h"
#include <string.h>
/**
 * infinite_add- C funtion that add two numbers stored
 * in strings to a buffer
 * @n1: numbers to be added
 * @n2:numbers to be added
 * @r: is the buffer that the function will use to store the result
 * @size_r: is the buffer size
 * You can assume that there will be only digits in the strings n1 and n2
 * If the result can not be stored in r the function must return 0
 * Return:  returns a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);

if (len1 + 1 > size_r || len2 + 1 > size_r)
	return (0);

int carry = 0;
int i, j;

for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
{
	int sum = carry;

	if (i >= 0)
		sum += n1[i] - '0';
	if (j >= 0)
		sum += n2[j] - '0';
	r[i + 1] = (sum % 10) + '0';
	carry = sum / 10;
}
if (carry)
{
	if (size_r < 2)
		return (0);
	r[0] = carry + '0';
	return (r);
}
else
return (r + 1);
}
