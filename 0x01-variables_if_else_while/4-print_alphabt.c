#include <stdio.h>

/**
 * main - prints the English alphabet in lowercase
 * except e and q
 *
 * Return: 0 if execution was successful
 */
int main(void)
{
	char alpbet = 'a';

	for (alpbet = 'a'; alpbet <= 'z'; alpbet++)
	{
		if (alpbet != 'e' && alpbet != 'q')
			putchar(alpbet);
	}

	putchar('\n');

	return (0);
}
