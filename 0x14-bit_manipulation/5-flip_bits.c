#include "main.h"
/* Include your header file here*/

/**
 * flip_bits - Calculates the number of bits needed to flip from
 * one number to another.
 *
 * @n: The first unsigned long int
 * @m: The second unsigned long int
 *
 * Return: The number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m; /* XOR of the two numbers*/
	unsigned int count = 0;
	/* Initialize a count variable to track the flipped bits*/

	while (xor_result)
	{
		count += xor_result & 1; /* Check the least significant bit*/
		xor_result >>= 1; /* Right shift xor_result to process the next bit*/
	}

	return (count);
}

