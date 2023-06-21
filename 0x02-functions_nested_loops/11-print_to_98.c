#include "main.h"
/**
 *
 * main - prints all natural numbers from n to 98,
 * followed by a new line
 *
 * return - 0 (success)
 */
 
void print_to_98(int n)
{
    if (n <= 98) {
        for (; n < 98; n++) {
            _putchar(n / 10 + '0');
            _putchar(n % 10 + '0');
            _putchar(',');
            _putchar(' ');
        }
    } else {
        for (; n > 98; n--) {
            _putchar(n / 10 + '0');
            _putchar(n % 10 + '0');
            _putchar(',');
            _putchar(' ');
        }
    }
    _putchar('9');
    _putchar('8');
    _putchar('\n');
}

