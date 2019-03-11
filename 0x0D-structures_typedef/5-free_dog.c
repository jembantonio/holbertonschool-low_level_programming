#include "dog.h"

/**
* free_dog - a function that frees dogs
* @d: struct pointer to struct dog
*
* Return: void
*/

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
