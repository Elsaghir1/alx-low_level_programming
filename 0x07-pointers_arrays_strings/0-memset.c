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
	int i = 0;
	char *p = s;

	while (i < n && s != '\0')
	{
		*s = b;
		i++, s++;
	}
	return (p);
}
