#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 *
 * @separator: first input
 * @n: second input
 * @...: other input
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list v;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(v, n);
	while (i--)
		printf("%s%s", (str = va_arg(v, char *)) ? str : "(nil)",
			i ? (separator ? separator : "") : "\n";
	va_end(v);
}
