/*********************************************************************
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13,   *
 * we can see that the 6th prime is 13.                              *
 * What is the 10,001st prime number?                                *
 *********************************************************************/

#include <stdio.h>
#include "euler.h"

int main(void)
{
	int i = 0; //number of primes
	int j = 2; //counter

 	for (;;)
 	{
 		if (isprime(j))
 		{
 			i++;
 			if (i == 10001)
 				break;
 		}
 		j++;
 	}
 	printf("%d\n", j);
 	return 0;
}