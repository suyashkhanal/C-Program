// program to reverse four digit number
#include<stdio.h>
int main()
{
	int n,a,b,c,d,rev;
	printf("Enter a four digit number : ");
	scanf("%d",&n);
	a=n;
	b=n%10;
	n=n/10;
	c=n%10;
	n=n/10;
	d=n%10;
	n=n/10;
	rev=b*1000+c*100+d*10+n;
	printf("The reversed numeber is %d",rev);
}
