#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer that will be paased an an argument
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (i != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
