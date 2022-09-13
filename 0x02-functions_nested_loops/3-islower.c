#include "main.h"

/**
 * main - Main function entry point
 * Return: Always zero
 */
int main(void) /* The function returns void */
{
	int r;
	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
