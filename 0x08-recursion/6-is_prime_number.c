#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 *
 * @n: input
 * @val: divisor
 *
 * Return: Always 0.
*/

int check(int n, int val);
int is_prime_number(int n)
{
	return (check(n, 2));
}

/**
 * check - to check if the number is prime or not
 *
 * @n: first input
 * @val: second input
 *
 * Return: Always 0.
*/

int check(int n, int val)
{
	if (val >= n && n > 1)
		return (1);
	else if (n % val == 0 || n <= 1)
		return (0);
	else
		return (check(n, val + 1));
}
