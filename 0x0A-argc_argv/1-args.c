#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: argument counter
 * @argv: Arguments passed as strings to the function
 * Return: Always 0 Successful
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
