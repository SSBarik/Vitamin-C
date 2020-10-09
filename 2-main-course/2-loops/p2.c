/*
P2. Print Floyd's triangle.

Expected Output
---------------------------------
1
2 3
4 5 6
7 8 9 10 
*/

#include<stdio.h>

int main()
{
    int num = 1, i = 0, j = 0;
    
    for( i=0; i<4; i++)
    {
        for( j=0; j<=i; j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
