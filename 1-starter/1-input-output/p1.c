/*
WAP to accept date(format: date/month/year or date-month-year) as the user input and display the date, mohtn & year separately.

Expected Output:
--------------------------------
Enter date: 09/11/2019
Date: 09
Month: 11
Year: 2019
*/

#include<stdio.h>

int main(void)
{
	int date, month, year;
	
	printf("Input date: ");
	scanf("%d%*[/-]%d%*[/-]%d%[/-]", &date, &month, &year); //using assignment suppression, less memory usage as there are still 5 format specifiers but only 3 arguments
	printf("Date: %d \nMonth: %d \nYear: %d", date, month, year);
	
	return 0;
}

/*
int main(void)
{
	int date, month, year;
	char separator[2];
	printf("Input date: ");
	scanf("%d%[/-]%d%[/-]%d%[/-]", &date, separator, &month, separator, &year); //using search sets, more memory usage due to the separator string
	printf("Date: %d \nMonth: %d \nYear: %d", date, month, year);
	return 0;
}
*/
