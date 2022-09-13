#include "main.h"

/**
 * print_alphabet_x10 - Main function entry point
 * Return: Always zero
 */
void print_alphabe4_x10(void) /* The function returns void */
{
	int i = 0;
	char ch = 'a';

	for (i = 0; i < 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
