#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: 1
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t msg_len = 59;

	fwrite(msg, sizeof(char), msg_len, stdout);
	return (1);
}
