#include <unistd.h>

int _putchar(char c)
{
	/* Write the character to file descriptor 1 (stdout)*/
	return (write(1, &c, 1));
}
