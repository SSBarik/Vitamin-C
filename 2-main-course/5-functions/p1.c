/*
P1. WAP to print fibonacci series upto n term using recursion.

Expected Output
-----------------------------
Enter number of terms: 7
Fibonacci Series:
0, 1, 1, 2, 3 , 5, 8

*/

#include<stdio.h>
   
void printFibonacci(int n)
{    
    static int n1 = 0, n2 = 1, n3;    
    if(n > 0) {    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         printf("%d ",n3);    
         printFibonacci(n-1);    
    }    
}

int main() 
{    
    int n;    
    printf("Enter the number of terms: ");    
    scanf("%d", &n);    
    printf("Fibonacci Series: ");    
    printf("%d %d ", 0, 1);    
    printFibonacci(n-2);  
  return 0;  
}
