#include "main.h"

/**
 * _strlen - return the length of string
 *
 * @s: input from another function
 *
 * Return: Always 0
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
		len++, s++;

	return (len);
}
