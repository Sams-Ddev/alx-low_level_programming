#include <stdio.h>
/**
 * main - main function block
 * Description: print numbers of base 10, starting from 0.
 * Return: 0(success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	putchar('\n');

	return (0);
}
