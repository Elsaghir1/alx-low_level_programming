#include "main.h"

/**
 * check -  function that capitalizes all words of a string.
 *
 * @c: input
 *
 * Return: Always 1 or 0.
*/

bool check(char c)
{
	char s[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
			return (true);
	}
	return (false);
}

/**
 * cap_string -  function that capitalizes all words of a string.
 *
 * @str: input from other function
 *
 * Return: Always 0.
*/

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (check(str[i]))
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i] -= 32;
		}
	}
	return (str);
}
