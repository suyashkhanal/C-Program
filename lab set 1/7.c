// program to read no of days and convert it into years, months and days
#include<stdio.h>
int main()
{
	int d,y,m,rd;
	printf("Enter number of days : ");
	scanf("%d",&d);
	y=d/365;
	m=(d%365)/30;
	rd = d-((y*365)+(m*30));
  	printf("%d days is equal to %d years, %d months and %d days",d,y,m,rd);
}
