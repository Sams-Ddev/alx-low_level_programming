/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isalpha(int c);
int _putchar(char r);

int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}
