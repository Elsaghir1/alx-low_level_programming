#include "main.h"

/**
 * print_sign - to check the sign of number
 * @n: input from other function
 * Return: 1 if positive or 0 if zer0 or -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
