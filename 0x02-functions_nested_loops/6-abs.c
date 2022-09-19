#include "main.h"
/**
 * _abs - Prints the absolute value of an integer
 * @J: Receive an interger as argument
 * Return: Always 0 (Successful)
 */

int _abs(int J)
{
	int i;

	if (J > 0)
	{
		i = J;
		return (i);
	}
	else
	{
		i = J * -1;
		return (i);
	}
}
