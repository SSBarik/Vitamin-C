/*

P1. WAP to check whether a string is palindrome or not.

Expected Output
------------------------------
Enter a string: test
Not a Palindrome!

Enter a string: radar
Yay! It's a Palindrome. 

*/

#include<stdio.h>
#include<string.h>

#define MAX_LIMIT 20

void isPalindrome(char str[]){
    int start = 0;
    int end = strlen(str) - 1;

    while (end > start)
    {
        if (str[start++] != str[end--])
        {
            printf("Not a Palindrome!\n");
            return;
        }
    }
    printf("Yay! It's a Palindrome.\n");
 }

int main()
{
    char str[MAX_LIMIT];

    printf("Enter a string: ");
    scanf("%s", str);

    isPalindrome(str);

 	return 0;
}