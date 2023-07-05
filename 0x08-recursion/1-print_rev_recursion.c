#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @str: string
 * Return: no return.
 */
void _print_rev_recursion(char *str)
{
	if (*str != '\0')
	{
		_print_rev_recursion(str + 1);
		_putchar(*str);
	}
}
