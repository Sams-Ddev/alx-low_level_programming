#include <stdio.h>
/**
 * main - main function block
 * Description: print numbers of base 10, starting from 0
 * on a newline
 * Return: 0(success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');

	return (0);
}
