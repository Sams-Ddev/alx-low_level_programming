#include <stdio.h>
/**
 * main - main funtion
 * Description: Print all base64 numbers in lowercase.
 * You can only use `putchar`, and only 3 times.
 * Return: 0
 */
int main(void)
{
	char hx;

	for (hx = 0; hx < 16; hx++)
	{
		if (hx < 10)
		{
			putchar(hx + '0');
		}
		else
		{
			putchar(hx - 10 + 'a');
		}
	}
	putchar('\n');

	return (0);
}
