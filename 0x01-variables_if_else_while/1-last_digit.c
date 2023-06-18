#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - assigning randome numbers to n
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int last_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_dig = n % 10;

	if (last_dig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_dig);
	}
	else if (last_dig == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last_dig);
	}
	else if (last_dig < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_dig);
	}
	printf("\n");

	return (0);
}
