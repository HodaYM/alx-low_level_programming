#include <stdio.h>
/**
 * main - A program that prints all arguments it receives
 * @argc: Arugments counts
 * @argv: Arugments vectors
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
