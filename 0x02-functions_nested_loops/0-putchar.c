#include "main.h"

/**
 * main - Main function entry point
 * Return: Always zero
 */
int main(void) /* The function returns void */
{
	char str_arr[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(str_arr[i]);
	}
	_putchar('\n');

	return (0);
}
