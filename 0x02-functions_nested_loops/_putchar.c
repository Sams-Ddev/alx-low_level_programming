#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints char c on the standard output
 *
 * returns 1 for success
 *
 * char c - prints a single character to output
 *
 */

int _putchar(char c)
{
	return (write(1 &c, 1));
}
