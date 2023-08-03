#include <unistd.h>

/**
 * _putchar - writes the character c to the
 * the standard output.
 *
 * @c: The character to print
 *
 * Return ;  On succeess 1.
 * on error, _1 is returned, and error is set
 * appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
