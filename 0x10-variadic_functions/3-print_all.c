#include "variadic_functions.h"

/**
 * fchar - format char
 * @separator: string
 * @v: argument pointer
 */
void fchar(char *separator, va_list v)
{
	printf("%s%c", separator, va_arg(v, int));
}

/**
 * fint - format integer
 * @separator: string
 * @v: argument pointer
 */
void fint(char *separator, va_list v)
{
	printf("%s%d", separator, va_arg(v, int));
}

/**
 * ffloat - format float
 * @separator: string
 * @v: argument pointer
 */
void ffloat(char *separator, va_list v)
{
	printf("%s%f", separator, va_arg(v, double));
}

/**
 * fstirng - format stirng
 * @separator: string
 * @v: argument pointer
 */
void fstring(char *separator, va_list v)
{
	char *str = va_arg(v, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";

	printf("%s%s", separator, str);
}


/**
 * print_all - function that prints anything.
 *
 * @format: input
 * @...: other input
 *
 * Return: Always 0.
*/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list v;
	token_t tokens[] = {
		{"c", fchar},
		{"i", fint},
		{"f", ffloat},
		{"s", fstring},
		{NULL, NULL}};

	va_start(v, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, v);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(v);
}
