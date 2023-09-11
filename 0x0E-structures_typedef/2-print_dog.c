#include "main.h"

/**
 * print_dog -  function that prints a struct dog
 *
 * @d: input
 *
 * Return: Always 0.
*/

void print_dog(struct dog *d)
{
	char *s = "(nil)";

	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : s);
		printf("Age: %f\n", d->age ? d->age : s);
		printf("Owner: %s\n", d->owner ? d->owner : s);
	}
}
