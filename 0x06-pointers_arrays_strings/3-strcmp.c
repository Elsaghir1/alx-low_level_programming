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
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			return ((int)((*s1 - '0') - (*s2 - '0')));
		}
		s1++, s2++;
	}
}
