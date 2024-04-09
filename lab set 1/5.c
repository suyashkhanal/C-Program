// program to find sum of digits of three digit number
#include<stdio.h>
int main()
{
	int num,a,b,c,d,sum;
	printf("Enter a three digit number : ");
	scanf("%d",&num);
  	a=num;
  	b=num%10;
  	num=num/10;
  	c=num%10;
  	num=num/10;
  	d=num%10;
  	sum=b+c+d;
  	printf("The sum is : %d",sum);
}
