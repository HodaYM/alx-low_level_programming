#include<stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int integerType;
char charType;
char c;
float floatType;
printf("Size of char is: %lu bytes.\n", sizeof(charType));
printf("size of int is: %lu bytes.\n:", sizeof(integerType));
printf("The size of a long int: %lu bytes.\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu bytes.\n", (unsigned long)sizeof(c));
printf("Size of float is: %lu bytes.\n", sizeof(floatType));
return (0);
}
