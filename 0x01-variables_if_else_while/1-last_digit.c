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
	int n, re;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	re = n % 10;
	if (re > 5)
	{
		printf("%s %d is %d and is greater 5\n", "Last digit of", n, re);
	}
	else if (re == 0)
	{
		printf("%s %d is %d and is 0\n", "Last digit of", n, re);
	}
	else if (re < 6 && re != 0)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", "Last digit of", n, re);
	}
	return (0);
}
