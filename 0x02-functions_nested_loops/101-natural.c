#include "main.h"
#include <unistd.h>

/**
 *
 * _putchar - prints single char to std output
 *
 * sum_of_multiples() - compute the sum of multiples
 *
 * main - recurses thr individual functions
 *
 * Return - 0 (success)
 */

int _putchar(char c);

int _putchar(char c)
{
	int _putchar(char c);
	return (putchar(c));
}

int sum_of_multiples(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	return (sum);
}

int main(void)
{
	int result = sum_of_multiples();
	int digit;
	int divisor = 10;

	if (result == 0)
	{
		_putchar('0');
	}
	else
	{
		while (result != 0)
		{
			digit = result % divisor;
			_putchar('0' + digit);
			result /= divisor;
		}
	}

	_putchar('\n');

	return (0);
}

