#include "main.h"

/**
 * _islower - to konw the lowercase letters
 * @c: input from other function
 * Return: 1 if c true else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
