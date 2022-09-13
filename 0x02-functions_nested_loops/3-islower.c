#include "main.h"

/**
 * _islower - Main function entry point
 * @c : character to check the case
 * Return: Always zero
 */
int _islower(int c) /* The function returns void */
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
