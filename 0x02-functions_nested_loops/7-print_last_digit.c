#include "main.h"

/**
 * print_last_digit - to print the last digit
 * @n: input from other function
 * Return: always 0 (success)
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = (n % 10) * (-1);
	else
		last_digit = n % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
