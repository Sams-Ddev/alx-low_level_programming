#include "main.h"

/**
 * main - prints our sum of two numbers
 *
 * Return - the addition of the two numbers
 */

int add(int a, int b);
int _putchar(char a);

int main(void)
{
    int a = 5;
    int b = 10;
    int result;

    result = add(a, b);

    _putchar(result + '0');
    _putchar('\n');

    return 0;
}

