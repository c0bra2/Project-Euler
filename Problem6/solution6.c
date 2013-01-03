/****************************************************************
 *                                                              *
 * The sum of squares of the first ten natural numbers is,      *
 *      1^2+2^2+...+10^2= 358                                   *
 * The square of the sum of the first ten natural numbers is,   *
 *      (1+2+...+10)^2 = 55^2 = 3025                            *
 * Hence the difference between the sum of the squares of the   *
 * first ten natural numbers and the square of the sum is       *
 * 3025 - 385 = 2640.                                           *
 *                                                              *
 * Find the difference between the sum of the squares of the    *
 * first one hundred natural numbers and the square of the sum. *
 *                                                              *
 ****************************************************************/

#include <stdio.h>

int main(void)
{
	int sumof_squares, squareof_sum = sumof_squares = 0, i;

	for (i = 1; i <= 100; i++)
	{
		sumof_squares += i*i;
		squareof_sum += i;
	}

	printf("%d\n", (squareof_sum * squareof_sum) - sumof_squares);
}