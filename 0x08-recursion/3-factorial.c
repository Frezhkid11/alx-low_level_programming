#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: the number to be passed as argument
 * Return: the factorial of the number n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
