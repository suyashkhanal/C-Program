// program to read distance in meter and convert it into kilometer and meter
#include<stdio.h>
int main()
{
	int m,km,rm;
	printf("Enter a distance in meter : ");
	scanf("%d",&m);
	km=m/1000;
	rm=m%1000;
  	printf("%d is equal to %d km and %d meter",m,km,rm);
}
