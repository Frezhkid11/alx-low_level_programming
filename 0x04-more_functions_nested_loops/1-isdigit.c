#include "main.h"
/**
 * _isdigit - function that checks weather argument is a digit
 * @c: argument to the function
 * Return: 1 if c is a digit otherwise 0
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
