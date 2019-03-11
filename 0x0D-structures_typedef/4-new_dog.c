#include "dog.h"

/**
* new_dog - a funtion that creates a new dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
*
* Return: pointer to struct of new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	new_dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_dog->name, name);
	new_dog->age = age;
	_strcpy(new_dog->owner, owner);

	return (new_dog);
}


/**
* _strlen - a function that finds the length of string
* @s: pointer to string
*
* Return: length of string
*/

int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
* _strcpy - a function that copies a string into a new buffer
* @dest: pointer to string destination
* @src: pointer to source string to copy
*
* Return: pointer to new destination of string
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);
}

