#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument counter
 * @argv: Argument passed
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;
	int mul;

	for (i = 0; i < argc; i++)
	{
	}
	if ((i > 3) || (i < 2))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}