#include "main.h"

/**
 * leet -  function that encodes a string into 1337.
 *
 * @s: input from other function
 *
 * Return: Always 0.
*/

char *leet(char *s)
{
	char *p = s;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	int i;

	while (*s)
	{
		for (i = 0; i < sizeof(key); i++)
		{
			if (*s == key[i] || *s == key[i] + 32)
				*c = 48 + value[i];
		}
		c++;
	}
	return (p);
}
