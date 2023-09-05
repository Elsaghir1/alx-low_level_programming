#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: first input
 *
 * Return: Always 0.
*/

char *_strdup(char *str)
{
	int sz = 0;
	char *c;

	if (str == NULL)
		return (NULL);
	while (str[sz] != '\0')
		sz++;
	c = malloc(sz * sizeof(*str) + 1);
	int i = 0;

	if (c == 0)
		return (NULL);

	for (; i < sz; i++)
		c[i] = str[i];
	return (c);
}
