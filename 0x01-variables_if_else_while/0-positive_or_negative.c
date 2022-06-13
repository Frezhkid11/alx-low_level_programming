#include <stdio.h>
#include <time.h>
/**
 *Entry point - Main
 *Include - time
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*If condition to determine the -ve of n*/
	if (n < 0);
	{
		printf("is negative\n");
	}
	if (n == 0);
	{
		printf("is zero\n");
	}
	if (n > 0);
	{
		printf("is positive\n");
	}
	return (0);
}
