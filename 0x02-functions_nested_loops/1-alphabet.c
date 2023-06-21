#include "main.h"

/**
 * print_alphabet - prints the alphabets,
 * in lowercase, followed by a new line
 *
 * return - void
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
