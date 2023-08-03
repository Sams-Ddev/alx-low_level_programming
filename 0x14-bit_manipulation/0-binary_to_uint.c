#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string containing the binary number.
 *
 * Return: The converted number,
 * or 0 if there is an invalid character or NULL input.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int multiplier = 1;
	int length = 0;
	int i;
	unsigned int digit;

	if (!b)	/* checks if the input string is NULL*/
		return (0);

	while (b[length])
		length++;

	if (length == 0)
		return (0);

	i = length - 1;
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		 digit = b[i] - '0';

		result += digit * multiplier;

		multiplier *= 2;
	}
	return (result);
}
