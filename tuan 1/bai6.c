#include<stdio.h>
int main(){
	int Allday = 1329;
	int Year, Week, Day;
	printf ("Number of days = 1329\n");
	Year = Allday/365;
	Week = (Allday - Year * 365) / 7;
	Day = Allday - Year * 365 - Week * 7;
	printf("Years:%d\n" ,Year);
	printf("Weeks:%d\n" ,Week);
	printf("Days:%d" ,Day);
	return 0;
}
