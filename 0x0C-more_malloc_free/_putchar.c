#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout
 * 2c: The character to print to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.\
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
