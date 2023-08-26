#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - A function that frees dogs
 * @d: The dog
 * Return: Void
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->owner);
free(d->name);
free(d);
}
}
