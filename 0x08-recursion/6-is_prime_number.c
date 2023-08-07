#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - A function that returns if it is a prime number
 * @n: An integer
 * @m: An integer
 * Return: 1 for prime number, otherwise 0
 */
int check_prime(int n, int m);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
 * check_prime - check the number that can divide n
 * @n: An integer
 * @m: An integer
 * Return: An integer value
 */
int check_prime(int n, int m)
{
if (m >= n && n >= 2)
return (1);
else if (n % m == 0 || n <= 1)
return (0);
else
return (check_prime(n, m + 1));
}
