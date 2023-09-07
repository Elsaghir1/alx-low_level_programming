#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: first input
 * @b: second input
 * @n: third input
 *
 * Return: Always 0.
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr)
}

/**
 * _calloc - function that allocates memory for an array, using malloc.
 *
 * @nmemb: first input
 * @size: second input
 *
 * Return: Always 0.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;

	if (size == 0 || nmemb == 0)
		return (NULL);
	c = malloc(nmemb * sizeof(int));
	if (c == 0)
		return (NULL);

	_memset(c, 0, size);

	return (c);
}
