#include "main.h"
/**
 *print_remaining_days- takes a date and prints how many days
 *are left in the year, taking leap years into account
 *
 *@month: month in number format
 *@day: day of the year
 *@year: year
 */

void print_remaining_days(int month, int day, int year)
{
	int leap;

	if (year % 100 == 0 && year % 400 == 0)
		leap = 1;
	else if (year % 4 == 0 && year % 100 != 0)
		leap = 1;
	else
		leap = 0;
	if (month == 2 && day == 60 && leap == 0)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
	}
	else if (month == 2 && day == 6)
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
	}
}
