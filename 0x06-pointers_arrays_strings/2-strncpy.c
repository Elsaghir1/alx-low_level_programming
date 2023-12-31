#include "main.h"

/**
 * _strncpy -  function that copies a string.
 *
 * @dest: first input
 * @src: second input
 * @n: third input
 *
 * Return: Always 0.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];

	while (i < n)
		dest[i] = '\0', i++;

	return (dest);
}
