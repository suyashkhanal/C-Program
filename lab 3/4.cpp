// Program to find sum of cube of first natural number
#include<stdio.h>
int main()
{
	int n,i,sum=0;;
	printf("Enter numebr of terms: ");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		sum += i*i*i;
	}
	printf("\nSum = %d",sum);
}