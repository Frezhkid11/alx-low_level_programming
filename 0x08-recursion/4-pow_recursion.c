#include "main.h"
/**
 * _pow_recursion - returns the valuue of x raised to the power of y
 * @x: argument passed as function
 * @y: argument passed as function
 * Return: the valvue of x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
