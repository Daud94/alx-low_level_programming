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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 > 5)
	{
		printf("%s %d is greater 5\n", "Last digit of", n);
	}
	else if (n % 10 == 0)
	{
		printf("%s %d is 0 and is 0\n", "Last digit of", n);
	}
	else if (n % 10 < 6 && n % 10 > 0)
	{
		printf("%s %d is les than 6 and not 0\n", "Last digit of", n);
	}
	return (0);
}
