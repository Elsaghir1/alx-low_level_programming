#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers,
 * followed by a new line.
 *
 * @separator: first input
 * @n: second input
 * @...: other input
 *
 * Return: Always 0.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list v;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(v, n);
	while (i--)
		printf("%d%s", va_arg(v, int), i ? (separator ? separator : "") : "\n");
	va_end(v);
}
