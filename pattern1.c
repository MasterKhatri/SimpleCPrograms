#include<stdio.h>
void main()
{
	int n, i,j;
	printf("Enter upto what row you want to print the pattern\n");
	scanf("%d", &n);
	for(i = 1; i<=n; i++){
		for(j = 1; j<=n; j++){
			if(j>=i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}

