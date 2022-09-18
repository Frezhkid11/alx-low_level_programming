#include "main.h"
/**
 * _isalpha - Checks for alphabets lower or uppercasee
 * @c: character to check
 * Return: 1 if character is alphabet, 0 otherwise
 */

int _isalpha(int c)
{
	int r;

	r = 0;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{	
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
