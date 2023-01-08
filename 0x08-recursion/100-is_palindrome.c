#include "main.h"
#include <string.h>
/**                                                                                                                       
 * last_index - returns the last index of a string (counts the null char)                                                   
 * @s: pointer to the string                                                                                         
 * Return: n                                                                                                                
 */                                                                                                                         
int last_index(char *s)                                                                                                    
{                                                                                                                          
	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}
/**
 * is_palindrome - check if the string is a palindrome
 * @s: string to check    
 * Return: 0 or 1 
 */
int is_palindrome(char *s)   
{
	   int end = last_index(s);

	    return (check(s, 0, end - 1, end % 2));
