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
	int mul;

	if (argc != 3)
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
