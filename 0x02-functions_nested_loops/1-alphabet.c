#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - entry point of program,
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

int _putchar(char c)
{
	return write(1, &c, 1);
}
