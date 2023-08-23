#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: first input
 * @src: second input
 * @n: third input
 *
 * Return: Always 0.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[i++] = src[j];

	return (dest);
}
