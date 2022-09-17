#include "main.h"
/**
 * print_alphabet_x10 - prints the letters in alphabet 10times
 *
 * Return: Always return 0
 */

void print_alphabet_x10(void)
{
	int no;
	char ch;

	no = 1;
	while (no < 11)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		no++;
	}
}
