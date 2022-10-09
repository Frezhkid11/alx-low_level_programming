#include "main.h"
/**
 * prime_number - a function that determines if a number is prime number
 * @n: number to be passed as argument
 * @c: number to be passed as iterator argument
 * Return: 1 if a prime number, 0 if not a prime number
 */

int prime_number(int n, int c)
{
	if ((n % c) == 0)
	{
		if (c == n)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (prime_number(n, c + 1));
}

/**
 * is_prime_number - function to determine weather argument is a prime number
 * @n: number to be passed as argument
 * Return: 1 if a prime number 0 if not a prime number
 */

int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	if (n == 0)
	{
		return (0);
	}
	return (prime_number(n, 2));
}
