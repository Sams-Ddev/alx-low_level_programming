#include <stdio.h>
#include "main.h"
#include <stdio.h>
/**
<<<<<<< HEAD
 * print_to_98 - Print all natural numbers from n to 98
 * @n: int type number
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
=======
 * print_to_98 - prints all the natural numbers from n to 98,
 * followed by a new line.
 * @n: print from this number
 */
void print_to_98(int n)
{
	int a;
	int b;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
		if (a != 98)
			printf("%d, ", a);
		else if (a == 98)
			printf("%d\n", a);
>>>>>>> 948477689561d6a05c8f2f0277f484bd7a8465c2
		}
	} else if (n >= 98)
	{
<<<<<<< HEAD
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	printf("\n");
=======
		for (b = n; b >= 98; b--)
		{
			if (b != 98)
				printf("%d, ", b);
			else if (b == 98)
				printf("%d\n", b);
		}
	}
>>>>>>> 948477689561d6a05c8f2f0277f484bd7a8465c2
}
