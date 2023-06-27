#include "main.h"

/**
 * _strlen - returns the length of a strng.
 * @s: input strng.
 * Return: length of a strng.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
