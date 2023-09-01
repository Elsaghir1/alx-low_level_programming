#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: first input
 * @b: second input
 * @n: third input
 *
 * Return: Always 0.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
