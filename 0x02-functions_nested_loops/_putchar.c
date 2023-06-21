#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints char c on the standard output
 *
 * @c: The character to write to output
 * prints a single character to output
 *
 * returns 1 for success, ON Error, -1.
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}
