#include "main.h"
#include <unistd.h>

/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 *
 * Return - nothing
 */

void print_alphabet_x10(void)
{
	int nline;
	char abc;

	for (nline = 0; nline < 10; nline++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');
	}
}
