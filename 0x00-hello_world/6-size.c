#include<stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizepf(char));
printf("Size of a an in: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of afloat %zu byte(s)\n", sizeof(float));
return (0);
}
