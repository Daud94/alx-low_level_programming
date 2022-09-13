#ifndef main
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
void print_alphabet(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
}
void print_alphabet_x10(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		print_alphabet();
		_putchar('\n');
	}
}
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int _isalpha(int c)
{
	if (_islower(c) == 1 || (c >= 'A' && c <= 'Z'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return 1;
	}
	if (n == 0)
	{
		_putchar('0');
		return 0;
	}
	if (n < 0)
	{
		_putchar('-');
		return -1;
	}
	return (0);
}

#endif
