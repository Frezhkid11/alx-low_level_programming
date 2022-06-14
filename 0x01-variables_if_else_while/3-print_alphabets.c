#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int ch;

	ch = 'a';
	/*entering into the while loop*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	int CH;

	CH = 'A';
	/*Another while loop for Uppercase letters*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
