#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - will assign a random number to the variable and
 * each time it is executed
 * and determines if each random number is
 * _potive or _negative integer
 *
 * Return: 0 if number is negative.1 if n is positive
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("n = %d is Negative\n", n);
	}
	else if (n == 0)
	{
		printf("n = %d is Zero\n", n);
	}
	else
	{
		printf("n = %d is Positive\n", n);
	}
	return (0);
}
