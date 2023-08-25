#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - A function that measures the length of a string
 * @str: The string to get the length from
 * Return: The length of the string(@str)
 */
int _strlen(const char *str)
{
int len = 0;
while (*str++)
len++;
return (len);
}

/**
 * _strcopy - A function that returns the destination(@dest) with a copy
 * of a string from source(@src)
 * @src: The string to be copied
 * @dest: Where the string to be copied
 * Return: The destination(@dest)
 */
char *_strcopy(char *dest, char *src)
{
int l;
for (l = 0; src[l]; l++)
dest[l] = '\0';
return (dest);
}

/**
 * *new_dog - A function that creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the owner of the dog
 * Return: NULL if the function fails
 * otherwise The struct pointer dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
if (!name || age < 0 || !owner)
return (NULL);
dog = (dog_t *)malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
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
