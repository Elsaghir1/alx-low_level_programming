#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: first input
 * @name: second input
 * @age: third input
 * @owner: fourth input
 *
 * Return: Always 0.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
