#include "main.h"
/**
 * _puts - prints out string to std
 * @str: pointer to the string
 * Return: Nothing
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}
