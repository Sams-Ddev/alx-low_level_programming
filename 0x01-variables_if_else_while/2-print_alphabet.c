#include <stdio.h>
/**
 * main - prints a lphabets to z using
 * putchar twice
 *
 * Return: always(0)
 */

int main(void)
{
	char alphbet;

	for (alphbet = 'a'; alphbet <= 'z'; alphbet++)
	{
		putchar(alphbet);
	}

	putchar('\n');

	return (0);
}
