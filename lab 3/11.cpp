/* Program to display the pattern
       0
       10
       010
       1010
       01010
*/

	#include<stdio.h>
	int main()
	{
		int i,j;
		for(i=1;i<=5;i++){
			for(j=1;j<=i;j++){
				printf("%d",(i+j)%2);
			}
			printf("\n");
		}
	}