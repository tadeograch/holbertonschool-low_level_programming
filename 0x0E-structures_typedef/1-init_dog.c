#include "dog.h"
/**
 * init_dog - Dog's information
 * @d: Structure name
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: void (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
