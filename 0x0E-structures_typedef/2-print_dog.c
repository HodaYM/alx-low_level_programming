#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - A function that prints a struct dog
 * @d: The dog structure to be printed
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
