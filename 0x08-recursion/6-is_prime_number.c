#include "main.h"
/**
 * is_prime_number -  a function that checks if a number is prime
 * isPrime - a function that actu
 *
 * @n: the passed value
 * @i: a default parameter
 * 
 * Return: 1 if prime, 0 if not
 */
int _is_prime_number(int n, int i = 2)
{
	if (n <= 2)
                return (n == 2) ? (1) : (0);
        if (n % i == 0)
                return (1);
        if (i * i > n)
                return (0);
        return isPrime(n, i + 1);
}
