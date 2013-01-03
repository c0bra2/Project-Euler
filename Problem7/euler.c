/*********************************************************
 *                                                       *
 * Various functions I wrote to help me solve problems   *
 * on project euler                                      *
 *                                                       *
 *********************************************************/

#include <string.h>
#include <stdio.h>
#include <math.h>
#include "euler.h"
#define MAX 10 

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

/*******************************************
 * test to see if a number is a palindrome *                            
 *******************************************/
int ispalinedrome(int test)
{
	char reversed[MAX + 1];
	char forwards[MAX + 1];

	//convert int to string
	sprintf(forwards, "%d", test);

	//reverse forwards 
	reverse(reversed, forwards);

	//compare strings
	if(strcmp(reversed, forwards) == 0)
		return 1; //is palindrome 
	else 
		return 0;
}

/********************************
 * reverses a string and stores *
 * result in first argument     *
 ********************************/
void reverse(char *a, char * const b)
{
	char *c;

	for (c = (b + (strlen(b) - 1)); c >= b; c--)
	{
		*a = *c;
		a++; 
	}
	*a = '\0'; //terminate the string 
}


