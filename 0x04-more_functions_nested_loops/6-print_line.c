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

	while (n > 0)
	{
		a++;
		n--;
	}
	while (a != 0)
	{
		_putchar('_');
		a--;
	}
	_putchar('\n');
}
