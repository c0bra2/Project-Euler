#include <string.h>
#include <stdio.h>
#include "euler.h"
#define MAX 10 

/*******************************************
 * test to see if a number is a palindrome *                            *
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
char reverse(char *a, char * const b)
{
	char *c;

	for (c = (b + (strlen(b) - 1)); c >= b; c--)
	{
		*a = *c;
		a++; 
	}
	*a = '\0'; //terminate the string 
}

