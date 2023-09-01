#include "main.h"

/**
 * _isalpha - to check if c is a letter
 * @c: input from other function
 * Return: 1 if is letter else 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
