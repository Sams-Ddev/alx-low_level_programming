#include <stdio.h>
#include <unistd.h>

/**
 * main - print quotations
 *
 * Description: prints exactly  the Dors's quote
 *
 * Return: the return value always 1 (Success)
 */

int main(void)
{
	/*write function is used to write data to a file descriptor*/
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
