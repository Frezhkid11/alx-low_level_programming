#include "main.h"
/**
 * print_to_98 - Prints number passed as interger up to 98
 * @n: Starting point for the function
 * Return: returns nothing
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n, n <= 97; n++)
			_putchar(n);
			_putchar(',');
			_putchar(' ');
	}
	else
	{
		for  (n = n; n > 98; n--)
			_putchar(n);
			_putchar(',');
			_putchar(' ');
	}
	_putchar("98");
	_putchar('\n');
}
