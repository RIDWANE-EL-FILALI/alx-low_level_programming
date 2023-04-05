#include "main.h"
/**
 * is_prime_number - Write a function that returns 1 if the input integer is a
 * prime number, otherwise return 0.
 *
 * @prime: Is my number prime
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	int i = 2;
	
	while (i <= n / 2)
	{
		if (n % i == 0)
			return (1);
		i++;
	}
	return (0);
}
