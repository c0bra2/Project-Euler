/**************************************************************
 *                                                            *
 * 2520 is the smallest number that can be divided by each of *
 * the numbers from 1 to 10 without any remainder.            *
 * What is the smallest positive number that is evenly        *
 * divisible by all of the numbers from 1 to 20?              *
 *                                                            *
 **************************************************************/

#include <stdio.h>
#ifndef MAX_INT
#define MAX_INT 2147483647 //((2^32) - 1); signed int (4 bytes)
#endif

int main(void)
{
	int i, j; //counters

	for (i = 2520; i <= MAX_INT; i++)
		for (j = 2; j <= 20; j++)
		{
			if (i % j)
			{
				break;
			}
			else if (j == 20)
			{
				printf("%d\n", i);
				return 0;
			}
		}
	return -1;
}