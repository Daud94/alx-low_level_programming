#include "main.h"

/**
 * main - Main function entry point
 * Return: Always zero
 */
void print_alphabet_x10(void)
{
	int i = 0;

	for (; i <=9; i++)
	{
		print_alphabet();
		_putchar('\n');
	}
	_putchar('\n');
	return (0);
	
}
