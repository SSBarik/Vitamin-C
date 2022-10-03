/*

P6.	WAP to add numbers until the user enters zero.

Expected Output:
---------------------------
Enter a number: 3
Enter a number: 9.8
Enter a number: -4.2
Enter a number: -6
Enter a number: 4

Sum = 4.6

*/

#include<stdio.h>

int main()
{
	float num = 0;
	float sum = 0;

	printf("Enter a number: ");
	scanf("%f", &num);

	while(num != 0) 
	{
		sum += num;
		printf("Enter a number: ");
		scanf("%f", &num);
	}

	printf("\nSum = %3.2f\n", sum);

	return 0;
}