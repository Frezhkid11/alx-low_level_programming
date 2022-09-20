#include "main.h"
/**
 * puts_half - a function to print the last half of a string
 * @str: pointer to the string
 * Return: void
 */

void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 != 0)
	{
		j = (i - 1) / 2;
	}
	else
	{
		j = i / 2;
	}
	_putchar(str[j]);
	_putchar('\n');
}
