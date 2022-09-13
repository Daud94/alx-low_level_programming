#include "main.h"

/**
 * print_alphabet_x10 - Main function entry point
 * Return: Always zero
 */
void print_alphabe4_x10(void) /* The function returns void */
{
	int i = 0;

	for (; i < 9; i++)
	{
		print_alphabet();
		_putchar('\n');
	}
	_putchar('\n');
}
