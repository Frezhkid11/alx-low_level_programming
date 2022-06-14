#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * Main - Entry point
 * Include - time
 *
 * Return: Always 0 (sucess)
 */
/*Main - Entry point*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*If condition to determine the -ve of n*/
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
