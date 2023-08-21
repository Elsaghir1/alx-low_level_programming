#include "main.h"

/**
 * swap_int - to swap two values of to integers
 *
 * @a: first input
 * @b: second input
 *
 * Return: Always 0.
*/

void swap_int(int *a, int *b)
{
	int *tmp = &a;

	&a = &b, &b = tmp;
}
