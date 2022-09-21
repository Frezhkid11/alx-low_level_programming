#include "main.h"
/**
 * print_numbers - print the numerical digits 0-9
 *
 * Return: void
 */

void print_numbers(void)
{
	int a;

	a = 48;
	while (a <= 57)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
