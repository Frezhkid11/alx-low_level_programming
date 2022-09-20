#include "main.h"
/**
 * print_rev - prints contents of a string in reverse
 * @s: pointer to the string
 * Return: void
 */

void print_rev(char *s)
{
	int len, last;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	last = len - 1;
	while (last >= 0)
	{
		last--;
		_putchar(s[last]);
	}
	_putchar('\n');
}
