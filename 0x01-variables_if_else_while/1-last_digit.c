
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints the last digit of a randomly generated number
* and wether it is greater than 5, less than 6, or 0.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n=0;
	int Last_digit=0;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
	Last_digit = n % 10;
        if (Last_digit > 5)
        {
                printf("Last digit of %d is %d and is greater than 5\n", n % 10, (int)Last_digit);
        }
        else if ((n % 10) < 6 && (n % 10) != 0)
        {
                printf("Last digit of %d is %d and is less than 6 and not 0\n", n % 10, (int)Lat_digit);
	}
        return (0);
}
