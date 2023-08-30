#include "main.h"

/**
 * _sqrt_recursion -  function that returns the natural
 * square root of a number.
 *
 * @n: input
 *
 * Return: Always 0.
*/

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - function to sqrt
 *
 * @n: first input
 * @val: second input
 *
 * Return: Always 0.
*/

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
