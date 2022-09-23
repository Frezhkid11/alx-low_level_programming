#include "main.h"
/**
 * _strncpy - two words
 * @dest: pointer to the string
 * @src: pointer to the other string
 * @n: int params
 * Return: *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; ji++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
