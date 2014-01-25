/***********************************************************************
 *                                                                     *
 *	If we list all the natural numbers below 10 that are multiples *
 *	of 3 or 5, we get 3, 5, 6, and 9. The sum of these multiples   *
 *	is 23                                                          *
 *                                                                     *
 ***********************************************************************/

#include <stdio.h>

int main(void)
{
	int sum = 0, i;

	for (i = 1; i < 1000; i++)
		if (!(i % 3) || !(i % 5))
			sum += i;
	printf("%d\n", sum);
	return 0;
}
