#include <stdlib.h>
#include "dog.h"
#include <string.h>
#include <stdio.h>

int _strlen(char *S);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new dog with specified name, age, and owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the newly created dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

/* Allocate memory for the new dog structure */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

/* Allocate memory for the name and owner strings */
new_dog->name = strdup(name);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}

new_dog->owner = strdup(owner);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}

/* Set the age of the new dog */
new_dog->age = age;

return (new_dog);
}
