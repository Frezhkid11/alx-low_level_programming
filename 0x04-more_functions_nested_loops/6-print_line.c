#include "main.h"
/**
 * print_line - function to print line in stdout
 * @n: argument to the function that determines how long the line will be
 *
 * Return: void
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
