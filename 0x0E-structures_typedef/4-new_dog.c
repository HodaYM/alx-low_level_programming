#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - A function that gets a length of a string
 * @str: The string that we can get the length from
 * Return: The length of @str
 */
int _strlen(const char *str)
{
int len = 0;
while (*str++)
len++;
return (len);
}

/**
 * _strcopy - A function that returns @dest with a copy of a copy of a string from @src
 * @src: The string to be copied
 * @dest: Copy the string to it
 *Return: @dest
 */
char *_strcopy(char *dest, char *src)
{
int l;
for (l = 0; src[l]; l++)
dest[l] = src[l];
dest[l] = '\0';
return (dest);
}

/**
 * *new_dog - A function that creates a new dog
 * @name: The name of dog
 * @age: The age of dog
 * @owner: The dog owner
 * Return: The struct pointer dog, otherwise return NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
if (!name \\ age < 0 || !owner)
return (NULL);
dog = (dog_t *) malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (_strle(name) + 1));
if ((*dog).name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if ((*dog).owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
dog->name = _strcopy(dog->name, name);
dog->age = age;
dog->owner = _strcopy(dog->owner, owner);
return (dog);
}
