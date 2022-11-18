#include "dog.h"

/**
  * init_dog - function that initialize a variable of type struct dog
  *
  * @d: pointer to struct dog
  * @name: name string literal, dog name
  * @age: age, age of dog
  * @owner: dog owner string literal
  *
  * Return: Returns nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
