#include "main.h"
/**
 * power - returns the natural squareroot of a number
 * @n: input number
 * @c: number to check if its the squareroot
 * Return: squareroot or -1
 */

int power(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if ((c * c) == n)
		{
			return (c);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + power(n, c + 1));
}

/**
 * _sqrt_recursion - returns the natural squareroot of a number
 * @n: number in which squareroot is to be found
 * Return: The natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (power(n, 2));
}
