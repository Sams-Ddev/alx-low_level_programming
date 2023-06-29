#include "main.h"
/**
 * reverse_array - reverses the content of any array
 * of integers/strings.
 * @a: array annotations
 * @n: number of elements of in array.
 * Return: no return (success).
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
