#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number.
 * @index: Index of the bit to set.
 *
 * Return: 1 if successful, -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is within the valid range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Set the bit at the given index by performing bitwise OR */
	*n = *n | (1UL << index);

	return (1);
}

