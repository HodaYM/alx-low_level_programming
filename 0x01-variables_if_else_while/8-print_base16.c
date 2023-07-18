#include <stdio.h>
/**
 * * main - Entry point
 *
 * Print all the numbers in lowercase
 *
 * Return:Always = 0 (Success)
 */
int main(void)
{
int Num;
char Letter;

for (Num = 0; Num <= 9; Num++)
{
Letter = Num + '0';
putchar(Letter);
}
for (Letter = 'a'; Letter <= 'f'; Letter++)
{
putchar(Letter);
}
putchar('\n');
return (0);
}
