#include "dog.h"

/**
  * free_dogs - function that frees dogs
  *
  * @d: pointer to struct dog
  *
  * Return: Returns nothing
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
