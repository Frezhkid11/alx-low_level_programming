#include "main.h"
/**
 * swap_int - swaps the value of two intergers
 * @a: pointer to an interger
 * @b: pointer to an interger
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
