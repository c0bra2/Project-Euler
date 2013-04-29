/************************************************************************
 *                                                                      *
 * Triangle, pentagonal, and hexagonal numbers are generated by the     *
 * following formula:                                                   *
 * Triangle 	  	Tn=n(n+1)/2 	  	1, 3, 6, 10, 15, ...            *
 * Pentagonal 	  	Pn=n(3n−1)/2 	  	1, 5, 12, 22, 35, ...           *             
 * Hexagonal 	  	Hn=n(2n−1) 	  	    1, 6, 15, 28, 45, ...           *             
 *                                                                      *
 * It can be verified that T285 = P165 = H143 = 40755.                  *
 *                                                                      *
 * Find the next triangle number that is also pentagonal and hexagonal. *
 *                                                                      *
 ************************************************************************/

#include <stdio.h>
#include "euler.h"
#define LIMIT 1000000

int main(void) 
{
	int t_inc, p_inc, h_inc;
	int tria;

	for (t_inc = 286; t_inc < LIMIT; t_inc++)
	{
		tria = tri(t_inc);
		for (p_inc = 165; p_inc < LIMIT; p_inc++)
			if (pen(p_inc) == tria)
				for(h_inc = 143; h_inc < LIMIT; h_inc++)
				{
					printf("T%d = P%d = H%d = %d", t_inc, p_inc, h_inc, tria);
					return 0;
				}
	}
	return -1;
}