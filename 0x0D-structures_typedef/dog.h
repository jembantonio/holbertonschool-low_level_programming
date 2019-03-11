#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>


/**
* struct dog - information about a dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);

#endif
