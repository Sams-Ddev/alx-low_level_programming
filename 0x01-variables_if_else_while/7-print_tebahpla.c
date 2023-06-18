#include <stdio.h>
/**
 * main - main function block
 * Description: Print the alphabet in reverse order in lowercase
 * and adds a newline.
 * Return: 0(success)
 */
int main(void)
{
	char zyx;

	for (zyx = 'z'; zyx >= 'a'; zyx--)
	{
		putchar(zyx);
	}
	putchar('\n');

	return (0);
}
