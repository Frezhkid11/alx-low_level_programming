#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digits;

	digits = 0;
	/*Loop to restrict more than 10*/
	while (digits < 10)
	{
		printf("%d", digits);
		printf("\n");
		digits++;
	}
	printf("\n");
	return (0);
}

