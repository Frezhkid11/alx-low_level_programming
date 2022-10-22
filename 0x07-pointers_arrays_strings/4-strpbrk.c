#include "main.h"
/**
 * _strpbrk - seraches a string for occurence of a byte
 * @s: pointer to the string to be searched
 * @accept: string containing the byte to be searched
 * Return: a pointer if found or null
 */

char *_strpbrk(char *s, char *accept);
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}
	}
	return ('\0');
}

