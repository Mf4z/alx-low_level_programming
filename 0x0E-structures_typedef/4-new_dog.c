#include "dog.h"

int string_length(char *string);
void copy_string(char *destination, char *source);

/**
  * new_dog - function that creates a new dog
  *
  * @name: dog's name string literal
  * @age: dog's age in float
  * @owner: dog's owner, string literal
  *
  * Return: Returns new dog pointer or NULL if the function fails
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	int name_length, owner_length;

	name_length = string_length(name);
	owner_length = string_length(owner);

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	/* Create new dog name string lireral */
	new_dog->name = malloc(sizeof(char) * (name_length + 1));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	/* Create new dog owner string lireral */
	new_dog->owner = malloc(sizeof(char) * (owner_length + 1));

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	copy_string(new_dog->name, name);
	copy_string(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}

/**
  * string_length - function that gets string length of string literals
  *
  * @string: string literal to get length of
  *
  * Return: Returns length of passed string literal
  */
int string_length(char *string)
{
	int i;

	i = 0;
	while (string[i] != '\0')
		i++;

	return (i);
}

/**
  * copy_string - function that copies content of source string literal to
  * destination string literal
  *
  * @destination: destination string literal to hold copied string at the end
  * @source: source string literal that contains string to be copied
  *
  * Return: Returns nothing
  */
void copy_string(char *destination, char *source)
{
	int i, src_len;

	src_len = string_length(source);

	for (i = 0; i < src_len; i++)
		destination[i] = source[i];

	destination[i] = '\0';
}
