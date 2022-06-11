#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Successs)
 */

int main(void)
{
	/*Declaration of variables*/
	char a = 'A';
	int  b = 125;
	long int c = 100000;
	long long int d = 600.5;
	float e = 34.5;

	printf("Size of a char: %ld byte(s)\n", sizeof(a));
	printf("Size of a int: %ld byte(s)\n", sizeof(b));
	printf("Size of a long int: %ld byte(s)\n", sizeof(c));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(d));
	printf("Size of a float: %ld byte(s)\n", sizeof(e));

	return (0);
}

