// program to find sum of digits of given number
#include<stdio.h>
int main(){
	int n,rem,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n>0){
		rem = n%10;
		sum = sum + rem;
		n=n/10;
	}
	printf("The sum of digits is %d",sum);
}