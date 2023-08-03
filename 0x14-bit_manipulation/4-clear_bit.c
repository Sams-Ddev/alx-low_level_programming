#include "main.h"  // Include your header file here

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the unsigned long int to modify
 * @index: Index of the bit to clear
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)  /* Check if index is valid*/
		return (-1);
	
	mask = 1UL << index;  /* Create a mask with the bit to clear set to 1*/

	if ((*n & mask) == 0)  /* If the bit is already 0, no need to modify */
		return 1;

	*n = *n ^ mask;  // Use XOR to clear the bit at the specified index

	return 1;
}

