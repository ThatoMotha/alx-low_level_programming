#include "main.h"
#include <string.h>
/**
 * rev_string - reversing a string
 * @s:string to reverse
 * Return: nothing
 */
void rev_string(char *s)
{
int len = strlen(s);
int aux = 0;
char ltemp;

while (aux < len / 2)
{
ltemp = s[len - aux - 1];
s[len - aux - 1] = s[aux];
s[aux] = ltemp;
aux++;
}
}
