//Program to check Prime or Not
#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("Enter any no: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		printf("Prime numbers");
	}
	else{
		printf("Not a prime number");
	}
}