#include "main.h"
/**
 * print_last_digit - Print the last digit of an interger
 * @n: interger to be passed as argument
 * Return: The last digit of a number
 */

int print_last_digit(int n)
{
	int a;
	int r;

	a = n % 10;
	if (a < 0)
		r = -1 * a;
		return (r);
	else
		return (a);
}
