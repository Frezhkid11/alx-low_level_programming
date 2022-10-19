#include "main.h"
#include <stdio.h>
/**
 * _strchr - A function that searches for a character in a string
 * @s: argument string which is to be searched
 * @c: character to be searched
 * Return: Return a pointer to occurence if char is found else return null.
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s - 1);
		}
		if (s[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
}
