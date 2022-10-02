#include "main.h"
/**
 * _puts_recursion - using recursion to print a string
 * @*s: the s passed as argument
 * Return: 0 successful
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar ('\n');
	}

}
