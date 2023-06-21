#include <unistd.h>

/**
 * putchar - prints char c on the standard output
 *
 * returns 1 for success
 * returns -1 for error
 */

int _putchar(char c)
{
	return (write(1 &c, 1));
}
