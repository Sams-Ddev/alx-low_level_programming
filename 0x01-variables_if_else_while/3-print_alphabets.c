#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 * and uppercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char letTER;

	for (letTER = 'a'; letTER <= 'z'; letTER++)
	{
		putchar(letTER);
	}
	for (letTER = 'A'; letTER <= 'Z'; letTER++)
	{
		putchar(letTER);
	}

	putchar('\n');
	return (0);
}
