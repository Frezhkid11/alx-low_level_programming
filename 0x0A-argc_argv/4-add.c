#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: Array of argument
 * Return: Always 0 (Successful)
 */

int main(int argc, char *argv[])
{
	int i, j, add;

	add = 0;
	if (argc <= 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add = add + atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}
