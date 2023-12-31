#include "main.h"

/**
 * len - find the size of string
 *
 * @s: input
 *
 * Return: Always 0.
*/

int len(char *s)
{
	int sz = 0;

	while (s[sz] != '\0')
		sz++;
	return (sz);
}

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: first input
 * @s2: second input
 *
 * Return: Always 0.
*/

char *str_concat(char *s1, char *s2)
{
	int sz1 = 0, sz2 = 0, i = 0;
	char *c;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	sz1 = len(s1), sz2 = len(s2);
	c = malloc((sz1 + sz2) * sizeof(char) + 1);

	if (c == 0)
		return (0);

	for (; i <= sz1 + sz2; i++)
	{
		if (i < sz1)
			c[i] = s1[i];
		else
			c[i] = s2[i - sz1];
	}
	return (c);
}
