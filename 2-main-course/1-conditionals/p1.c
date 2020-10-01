/*
P1.	WAP to accept a number from the user and display corresponding day assuming Monday as the first day. If the input is not in the range 1-7 ask for input again.

Expected Output:
---------------------------
Enter a week number: 9
Oops! Please enter a number between 1-7
Enter a week number: 6
It's Saturday!
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int week_number = 1;
    start:
    printf("Enter a week number: ");
    scanf("%d", &week_number);
    
    if(week_number <= 0 || week_number >= 7)
    {
        printf("Oops! Please enter a number between 1-7\n");
        goto start;
    }
    else
    {
        if(week_number == 1)
        {
            printf("It's Monday\n");
        }
        else if(week_number == 2)
        {
            printf("It's Tuesday\n");
        }
        else if(week_number == 3)
        {
           printf("It's Wendesday\n");
        }
        else if(week_number == 4)
        {
            printf("It's Thursday\n");
        }
        else if(week_number == 5)
        {
            printf("It's Friday\n");
        }
        else if(week_number == 6)
        {
            printf("It's Saturday\n");
        }
        else if(week_number == 7)
        {
            printf("It's Sunday\n");
        }
        else
            exit(0);
    }
	return 0;
}
