#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @str: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(str + 1));
}
