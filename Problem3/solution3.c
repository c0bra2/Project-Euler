/****************************************************
 *                                                  *
 * The prime factors of 13195 are 5, 7, 13, and 29. *
 * What is the largest prime factor of the number   *
 * 600851475143?                                    *
 *                                                  *
 ****************************************************/

#include <stdio.h>
#include <math.h> 
#define NUMBER 600851475143

int isprime(int n);

int main(void)
{
	int i, largest = 0;

	for (i = 1; i < ((int)sqrt(NUMBER)); i++)
		if (isprime(i) && !(NUMBER % i))
			largest = i;

	printf("\nThe largest prime factor is %d\n", largest);

	return 0;
}

/******************************
 * tests if a number is prime *
 ******************************/
int isprime(n)
{
	int x;
	int squared;
	squared = pow(n,0.5);

	if (n < 2)
		return 0;
	if (n == 2)
		return 1;
	if (n % 2 == 0)
		return 0;
	for (x = 3; (x < (squared + 1)); x = x + 2)
		if (n % x == 0)
			return 0;
	return 1;
}
