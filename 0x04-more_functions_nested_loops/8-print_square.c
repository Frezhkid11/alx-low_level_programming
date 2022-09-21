#include "main.h"
/**
 * print_square - print out squares using #
 * @size: size of the square to be printed
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
			for (j = 1; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
