#include <stdio.h>
/**
 * main - A program prints the number of arguments
 * @argc: Arugments counts
 * @argv: Arugments vectors
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
