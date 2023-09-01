#include "main.h"

/**
 * _memcpy - function that copies memory area.
 *
 * @dest: first input
 * @src: second input
 * @n: third input
 *
 * Return: Always 0.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
