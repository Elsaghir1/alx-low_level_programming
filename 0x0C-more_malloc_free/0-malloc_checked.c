#include "main.h"

/**
 * malloc_checked -  function that allocates memory using malloc.
 *
 * @b: input
 *
 * Return: Always 0.
*/

void *malloc_checked(unsigned int b)
{
	int *c = malloc(b);

	if (c == 0)
		exit(98);
	return (c);
}
