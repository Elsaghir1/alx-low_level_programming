#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: program to know the last digit of random number
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, ls;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ls = n % 10;
	if (ls > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, ls);
	else if (ls == 0)
		printf("Last digit of %i is %i and is 0\n", n, ls);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, ls);
	return (0);
}
