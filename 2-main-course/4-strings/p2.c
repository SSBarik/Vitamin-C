/*

P2. WAP to reverse your name.

Expected Output
------------------------------
Enter your name: SHASHANK
Your name in reverse: KNAHSAHS

*/

#include<stdio.h>
#include<string.h>
#define MAX_LIMIT 20

int main()
{
    char name[MAX_LIMIT], revName[MAX_LIMIT];
    int i, j, nameLength;

    printf("Enter your name: ");
    fgets(name, MAX_LIMIT, stdin);

    nameLength = strlen(name);

    // reverse the string
    for(j = nameLength-1 ,i = 0; i < nameLength; i++, j--)
        revName[i] = name[j-1];

    printf("Your name in reverse: %s\n", revName);

	return 0;
}