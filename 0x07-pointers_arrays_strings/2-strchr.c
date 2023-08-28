#include "main.h"

/**
 * _strchr-  function that locates a character in a string.
 *
 * @s: first input
 * @c: second input
 *
 * Return: Always 0.
*/

char *_strchr(char *s, char c)
{
	unsigned int flag = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			flag = 1;
			break;
		}
		s++;
	}
	if (flag)
		return (s);
	else
		return ('\0');
}
