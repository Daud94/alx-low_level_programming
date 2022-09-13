#include "main.h"

/**
 * _isalpha - Main function entry point
 * @c : character to check the case
 * Return: Always zero
 */
int _isalpha(int c) /* The function returns void */
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
