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
	int j = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i < j && i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
