#include "main.h"
/**
 * leet - encodes a string to 1337
 * @str: the string to be encoded
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
int i, j;
char replacements[] = {'4', '3', '0', '7', '1'};
char chars[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

for (i = 0; str[i] != '\0'; i++)
{
	for (j = 0; j < 10; j++)
	{
		if (str[i] == chars[j])
		{
			str[i] = replacements[j];
			break;
		}
	}
}
return (str);
}
