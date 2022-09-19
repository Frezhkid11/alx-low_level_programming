#include "main.h"
/**
 * print_sign - prints the sign of numbers
 * @n: number to be checked
 * Return: 1 if positive 0 if zero -1 if negative
 */

int print_sign(int n)
{
	int r;

	r = 0;
	if (n > 0)
	{
		_putchar('+');
		r = 1;
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			r = -1;
		}
		else
		{
			_putchar('0');
			r = 0;
		}
	}
	return (r);
}
