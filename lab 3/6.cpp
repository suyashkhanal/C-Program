// Program to find reverse of a given number
#include<stdio.h>
int main()
{
	int n,rem,rev=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n!=0){
		rem = n%10;
		rev = rev*10+rem;
		n/=10;
	}
	printf("The reverse of digits is %d",rev);
}