#include "main.h"
/**
 * puts_half - a function to print the last half of a string
 * @str: pointer to the string
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 != 0)
	{
		j = (i + 1) / 2; /*Solved ((length - 1)/2) +1) */
	}
	else
	{
		j = i / 2;
	}
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
