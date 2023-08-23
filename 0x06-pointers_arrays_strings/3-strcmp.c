#include "main.h"

/**
 * _strcmp - function that compares two strings.
 *
 * @s1: first input
 * @s2: second input
 *
 * Return: Always 0.
*/

int _strcmp(char *s1, char *s2)
{
	int ans = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			ans = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++, s2++;
	}
	return (ans);
}
