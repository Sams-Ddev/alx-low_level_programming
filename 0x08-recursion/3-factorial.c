#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @inp: input number.
 * Return: factorial of the number.
 */
int factorial(int inp)
{
	if (inp < 0)
		return (-1);
	else if (inp == 0)
		return (1);
	else
		return (inp * factorial(inp - 1));
}
