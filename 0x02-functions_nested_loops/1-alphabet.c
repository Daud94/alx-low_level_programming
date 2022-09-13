#include "main.h"

/**
 * main - Main function entry point
 * Return: Always zero
 */
void print_alphabet(void) /* The function returns void */
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
