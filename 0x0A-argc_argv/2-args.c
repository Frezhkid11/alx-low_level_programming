#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: argument counter
 * @argv: Array of arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
