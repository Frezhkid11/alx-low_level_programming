#include "main.h"
/**
 * print_most_numbers - print the numbers 0 - 9 excluding 2&4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int a;

	a = 48;
	while ((a >= 48 ) && (a <= 57))
	{
		if ((a == 50) || (a == 52))
		{
			a++;
		}
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
