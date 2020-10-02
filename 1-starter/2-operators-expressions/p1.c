/*
P1. WAP to accept a three digit number and display the reverse of the number.

Expected Output:
--------------------------
Enter a 3-digit number: 456
Reverse of the number is 654.
*/

#include<stdio.h>
int main()
{
    int num, rev = 0;
    printf("Enter a three digit number : ");
    scanf("%d", &num);
    
    while (num != 0)
    {
        rev = rev*10;
        rev = rev+num%10;
        num = num/10;
    }
    
    printf("Reverse of the number : %d\n", rev);
    return 0;
}
