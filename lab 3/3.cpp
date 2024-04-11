// Program to generate first n even number and find their sum
#include<stdio.h>
int main()
{
	int n,i,sum=0;;
	printf("Enter numebr of terms: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d ",i*2);
		sum += i*2;
	}
	printf("\nSum = %d",sum);
}