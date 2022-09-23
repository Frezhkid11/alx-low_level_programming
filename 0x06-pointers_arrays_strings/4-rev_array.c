#include "main.h"
/*
 * reverse_array - a function to reverse gthe content of an array
 * @a: interger to the argument
 * @n: interger to the argument
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
