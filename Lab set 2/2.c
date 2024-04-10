// to read nuber and check it is positive or negative
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n<0){
	printf("The entered numebr is negative");
		}
	else if(n>0){
	printf("The entered numebr is positive");
		}
	else{
	printf("The entered numebr is zero");
		} 
}