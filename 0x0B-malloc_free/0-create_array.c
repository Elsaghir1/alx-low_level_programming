#include "main.h"

/**
 * *create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: first input
 * @c:second input
 *
 * Return: A pointer.
*/

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || arr == 0)
		return (0);
	while (size--)
		arr[size] = c;
	return (arr);
}
