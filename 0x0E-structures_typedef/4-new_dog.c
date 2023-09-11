#include "dog.h"

/**
 * _strlen - return the length of string
 *
 * @s: input from another function
 *
 * Return: Always 0
*/

int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
		len++, s++;

	return (len);
}

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest: first input
 * @src: second input
 *
 * Return: Always 0.
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

/**
 * *new_dog -  function that creates a new dog.
 *
 * @name: first input
 * @age: second input
 * @owner: third input
 *
 * Return: Always 0.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *user;

	if (!name || age < 0 || !owner)
		return (NULL);
	user = (dog_t *) malloc(sizeof(dog_t));
	if (user == NULL)
		return (NULL);
	user->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*user).name == NULL)
	{
		free(user);
		return (NULL);
	}

	user->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*user).owner == NULL)
	{
		free(user->name);
		free(user);
		return (NULL);
	}
	user->name = _strcpy(user->name, name);
	user->age = age;
	user->owner = _strcpy(user->owner, owner);

	return (user);
}
