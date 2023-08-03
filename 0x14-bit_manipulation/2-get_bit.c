#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The unsigned long integer.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at index, or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit_value;

	/* Checks if the index is out of bounds */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	
	/* Shift the bit at the desired index to the least significant position */
	mask = 1UL << index;

	/* Use bitwise AND to check the value of the bit */
	bit_value = (n & mask) ? 1 : 0;

	return (bit_value);
}

