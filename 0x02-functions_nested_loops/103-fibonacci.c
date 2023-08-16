#include "main.h"

/**
 * main - Entry piont
 * Description: print sum of even fibonacci numbers below 4000000
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum, ans = 0;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
			break;
		if (sum % 2 == 0)
			ans += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%lu\n", ans);
	return (0);
}
