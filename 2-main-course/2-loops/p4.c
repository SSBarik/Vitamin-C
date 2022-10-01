/*
P3. Print the following.
Expected Output
---------------------------------
A
B B
C C C
D D D D
*/
#include<stdio.h>

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            char c = 'A' + i;
            printf("%c ", c);
        }
        printf("\n");
    }
	return 0;
}
