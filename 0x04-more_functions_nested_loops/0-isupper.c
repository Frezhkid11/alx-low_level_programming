#include "main.h"
/**
 * _isupper - function to check if argument is upper case
 * @c: argument to be passed
 * Return: 1 if c is upper 0 if not
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
