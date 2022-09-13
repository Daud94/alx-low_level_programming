#include "main.h"

/**
 * print_sign - Main function entry point
 * @n : character to check the case
 * Return: Always zero
 */
int print_sign(int n) /* The function returns void */
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
}
