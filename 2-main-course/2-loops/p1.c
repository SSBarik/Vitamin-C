/*
P1. Print a full Pyramid.

Expected Output
---------------------------------
      *
     ***
    *****
   *******
  ********* 
*/

#include<stdio.h>

int main()
{
	int i, j;
	for(i = 0; i < 5; i++)   // to continue for 5 levels
	{
		for(j = 5; j > i; j--)  // to print the spaces
			printf(" ");
		for(j = 0; j < i*2+1; j++) // to print the '*'	
			printf("*");
		printf("\n");	// for newline	
	}
	return 0;
}
