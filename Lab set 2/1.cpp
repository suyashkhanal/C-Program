// to read lowercase character and convert into uppercase
#include<stdio.h>
int main()
{
	char a,up;
	printf("Enter a character: ");
	scanf("%c",&a);
	up=a-32;
	printf("The upper case is %c",up);
}