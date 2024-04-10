/* a menu based program to check 
1) area of rectangle
2) perimeter of rectangle
3) Exit */
#include<stdio.h>
int main()
{
	int menu;
	int l,b,a,p;
	printf(" Enter 1 for area, 2 for perimeter and 3 forf exiting the program: ");
	scanf("%d",&menu);
	switch (menu){
	case 1:
		printf("Enter length and breadth: ");
		scanf("%d%d",&l,&b);
		a=l*b;
		printf("area is %d",a);
		break;
	case 2:
		printf("Enter length and breadth: ");
		scanf("%d%d",&l,&b);
		p=2*(l+b);
		printf("perimeter is %d",p);
		break;
	case 3:
		exit(0);
		default:
			printf("you entered a wrong choice");
	}
}