#include "main.h"

/**
 * print_alphabet - prints the alphabets,
 *
 * in lowercase, followed by a new line
 *
 * Function is a void returns nothing.
 *
 * _putchar - prints character ro standard outout
 *
 * alp - universal variable.
 */

void print_alphabet(void
int _putchar(char alp);)
{
	char alp;

	alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}

	_putchar('\n');
}

int main(void)
{
	print_alphabet();

	return (0);
}
