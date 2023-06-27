#include "main.h"

/**
 * _puts - prints a string, followed by a blank new line,
 * @str: pointer to string to print
 * Return: void (nothing)
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
