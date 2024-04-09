// program to find simple interest and amount
#include<stdio.h>
int main()
{
	int p,t,r,si,a;
	printf("Enter principle time and rate : ");
	scanf("%d%d%d",&p,&t,&r);
    si=(p*t*r)/100;
    a=si+p;
	printf("Simple Interest is : %d",si);
	printf("\nAmount is : %d",a);
}
