#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that adds positive numbers
 * @argc: Arugments counts
 * @argv: Arugments vectors
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int sum = 0;
char *c;
while (--argc)
{
for (c = argv[argc]; *c; c++)
if (*c < 48 || *c > 57)
printf("Error\n");
return (1);
sum += atoi(argv[argc]);
}
printf("%d\n", sum);
return (0);
}
