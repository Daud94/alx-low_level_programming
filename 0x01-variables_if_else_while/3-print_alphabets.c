/* Program to determing if a random number is positive, negative or zero */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Main function entry point
 * Return: Always zero
 */
int main(void) /* The function returns void */
{
	int i = 0;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
		putchar(', ');
	putchar('\n');
	return (0);
}
