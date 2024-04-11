//program to generate first n odd terms
#include<stdio.h>
int main()
{
	int n,i;
	printf("How many numbers: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d ",i*2-1);
	}
}