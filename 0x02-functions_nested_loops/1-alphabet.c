#include "main.h"

/**
 * main - Main function entry point
 * Return: Always zero
 */
int main(void) /* The function returns void */
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');

	return (0);
}
