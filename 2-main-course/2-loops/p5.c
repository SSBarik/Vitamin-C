/*

P5 WAP to print Fibonacci series in given range.

Expected Output
---------------------------------
Enter starting term: 4
Enter end term: 30

Fibonacci terms greater than 4 and less than 30: 
5, 8, 13, 21

*/
#include<stdio.h>

int main()
{
    int a,b;
    a=0;
    b=1;
    for(int i=0;i<10;i++){
        int temp=a+b;
        a=b;
        b=temp;
        
        //this extra condition is for ignoring extra comma after 21
        if(temp==21){printf("%d",temp);continue;}
        
        if(temp>=4 && temp<=30) printf("%d, ",temp);
    }
	return 0;
}
