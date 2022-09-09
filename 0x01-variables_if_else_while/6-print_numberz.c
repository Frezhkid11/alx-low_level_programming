#include <stdio.h>
/**
  * main - Entry point
  * Return: Always 0 (Success)
  */
int main(void)
{
	int digits;

	digits = 48;

	/*loop function starts*/

	while (digits <= 57)
	{
		putchar(digits);
		digits++;
	}
	putchar('\n');
	return (0);
}
