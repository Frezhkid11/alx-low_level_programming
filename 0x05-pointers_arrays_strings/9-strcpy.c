#include "main.h"
/**
 * *_strcpy - copy the contents of the latter string to the former
 * @src: string to be copied from
 * @dest: string to be copied to
 * Return: pointer to string copied
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
