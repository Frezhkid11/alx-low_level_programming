#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	ch = 'a';
	/*while Loop to display the alphabeth on screen*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	return (0);
}

