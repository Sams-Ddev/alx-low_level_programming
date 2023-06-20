#include "main.h"

/**
 * print_alphabet - prints the alphabets,
 *
 * in lowercase, followed by a new line
 *
 * Function is a void returns nothing.
 */

void print_alphabet(void)
{
	char alp;

	alp = 'a';

	while ( alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}

	_putchar('\n');
}
