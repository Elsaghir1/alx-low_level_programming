#include "main.h"

/*
 * _isupper - check if c is upper
 *
 * @c: input from other function
 *
 * Return: 1 if it's uppercase else 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
