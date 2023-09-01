#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: first input
 * @src: second input
 *
 * Return: Always 0.
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++)
		dest[i++] = src[j];
	return (dest);
}
