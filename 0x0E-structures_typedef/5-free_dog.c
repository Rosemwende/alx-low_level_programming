#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a dog structure
 * @d: pointer to the dog structure to be freed
 */
void free_dog(dog_t *d)
{
/* Check if the input pointer is not NULL */
if (d != NULL)
{
/* Free the allocated memory for name and owner strings */
free(d->name);
free(d->owner);
/* Free the memory allocated for the dog structure itself */
free(d);
}
}
