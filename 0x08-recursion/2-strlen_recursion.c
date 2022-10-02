#include "main.h"
/**
 * _strlen_recursion - determines the length of string
 * @s: pointer to the string to be passed as argument
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
