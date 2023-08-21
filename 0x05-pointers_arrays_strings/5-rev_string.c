#include "main.h"

/**
 * rev_string -  function that reverses a string
 *
 * @s: input from other function
 *
 * Return: Always 0.
*/

void rev_string(char *s)
{
	int i = 0, len = strlen(s);

	while (i < len / 2)
	{
		char tmp = s[i];

		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
		i++;
	}
}
