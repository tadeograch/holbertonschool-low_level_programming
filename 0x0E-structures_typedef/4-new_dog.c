#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - pointer to a new string which is a duplicate of the string str.
 * @str : string.
 *
 * Return: An array of charactures.
 */
char *_strdup(char *str)
{
	int i = 0;
	int length = 0;
	char *string;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
	{
		length++;
		i++;
	}
	string = malloc(sizeof(char) * (length + 1));
	if (string == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		*(string + i) = *(str + i);
		i++;
	}
	*(string + i) = '\0';
	return (string);
}

/**
 * new_dog - creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: New dog (Succes)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name1, *owner1;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	if (name == NULL || owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	name1 = _strdup(name);
	if (name1 == NULL)
	{
		free(name1);
		free(new_dog);
		return (NULL);
	}
	owner1 = _strdup(owner);
	if (owner1 == NULL)
	{
		free(name1);
		free(owner1);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = name1;
	new_dog->age = age;
	new_dog->owner = owner1;
	return (new_dog);
}
