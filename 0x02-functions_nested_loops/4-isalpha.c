#include "main.h"
/**
 * _isalpha - Checks for alphabets lower or uppercasee
 * @c: character to check
 * Return: 1 if character is alphabet, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
