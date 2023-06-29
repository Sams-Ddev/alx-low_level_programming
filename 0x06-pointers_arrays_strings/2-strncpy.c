#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source (initialiser)
 * @n: the total amount of bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int idx = 0;
	char null_pad = 0;

	while (idx < n)
	{
		null_pad = *(src + idx) == '\0' && !null_pad ? 1 : null_pad;
		*(dest + idx) = null_pad ? '\0' : *(src + idx);
		idx++;
	}
	return (dest);
}
