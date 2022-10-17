#include "main.h"
/**
 * *_memcpy - copys the bytes from one array to another
 * @dest: array to be copied to
 * @src: array to be copied from
 * @n: bytes filled
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
