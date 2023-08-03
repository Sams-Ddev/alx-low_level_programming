#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int num = 1; /* Create an integer with the value 1*/

	/* Typecast the integer's address to a character pointer*/
	char *endian_check = (char *)&num;

	if (*endian_check) /* If the value at the address pointed by endian_check is not 0*/
		return 1; /* System is little endian */
	else
		return 0; /* System is big endian */
}

