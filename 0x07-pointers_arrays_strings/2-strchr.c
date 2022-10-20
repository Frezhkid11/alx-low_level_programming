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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
