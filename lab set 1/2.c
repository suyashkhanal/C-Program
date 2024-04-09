// program to b^p 
#include<stdio.h>
#include<math.h>
int main()
{
	int b,p,a;
	printf("Enter base and power: ");
	scanf("%d%d",&b,&p);
	a=pow(b,p);
	printf("The result is : %d",a);
}
