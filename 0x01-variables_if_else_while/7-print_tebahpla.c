#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char no;

	no = 'z';
	/*Entering loop to print reocurring letters*/

	while (no >= 'a')
	{
		putchar(no);
		no--;
	}
	putchar('\n');
	return (0);
}
