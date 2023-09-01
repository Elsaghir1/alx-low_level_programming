#include "main.h"

/**
 * _abs - to claculate the absolute value
 * @n: input from other function
 * Return: always 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
