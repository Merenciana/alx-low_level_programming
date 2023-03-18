#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints last digit of a random number
 * Return: 0
 */
int main(void)
{
	int n, lastd;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	lastd = n % 10;

	if (lastd > 5)
	{
	printf("%d is greater that 5\n", lastd);
	}
	else if ((lastd < 6) && (lastd < 0))
	{
	printf("%d and is less than 6 not 0\n", lastd);
	}
	else
	{
	printf("%d is 0\n", lastd);
	}
	return (0);
}
