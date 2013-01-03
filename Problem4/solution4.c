/**************************************************************
 *                                                            *
 * A palindromic number reads the same both ways. The largest *
 * palindrome made from the product of two 2-digit numbers is *
 * 9009 = 91 * 99.                                            *
 * Find the largest palindrome made from the product of two   *
 * 3-digit numbers.                                           *
 *                                                            *
 **************************************************************/

#include <stdio.h>
#include "euler.h"

int main(void)
{
	int i, j; //counters
	int palin, largest = 0;

	for (i = 100; i <= 999; i++)
 		for (j = 100; j <= 999; j++)
 		{
 			palin = (i * j);
 			if (ispalinedrome(palin))
 				if (palin > largest)
 					largest = palin;
 		}
	printf("%d\n", largest);
	return 0;
}