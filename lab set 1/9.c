// program to check whether a number is odd or even using ternary operator
#include<stdio.h>
int main()
{
	int n,a;
	printf("Enter a number : ");
	scanf("%d",&n);
	a=n%2;
	a==0?printf("the number is even"):printf("The number is odd");
}
