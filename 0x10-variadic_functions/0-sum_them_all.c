#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * @n: input
 * @...: other input
 * Return: Always 0.
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list v;

	if (!n)
		return (0);
	while (i--)
		sum += va_arg(v, int);
	va_end(v);
	return (sum);
}
