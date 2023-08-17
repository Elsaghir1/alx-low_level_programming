#include "main.h"

/**
 * _isupper - to check if c is uppercase
 *
 * @c: input from other function
 *
 * Return: 1 if it's uppercase, 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
