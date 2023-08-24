#include "dog.h"
/**
 * init_dog - A function that initialize a variable of type struct dog
 * @d: The dog to be initialized
 * @name: The dog's name
 * @age: The dog's age
 * @owner: owner's name
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}

