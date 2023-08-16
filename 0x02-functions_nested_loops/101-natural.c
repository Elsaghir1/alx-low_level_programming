#include "main.h"

/**
 * main - Entry piont
 * Description: calculate the sum of the multiples of 3 and 5 below 1024
 * Retrun: always 0 (success)
 */

int main(void)
{
	int sum, i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
