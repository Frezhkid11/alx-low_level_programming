#include <stdio.h>
/**
 * main - print the hexadecimal numbers
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int digit;

	digit = 48;
	/*loop to print first the digits 0-9*/
	while (digit <= 57)
	{
		putchar(digit);
		digit++;
	}
	char no;

	no = 'a';
	/*loop to print the letters a-f*/
	while (no <= 'f')
	{
		putchar(no);
		no++;
	}
	putchar('\n');
	return (0);
}
