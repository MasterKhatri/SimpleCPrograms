#include <stdio.h>
main()
{
	int n, temp, i, j, k;
	printf("Enter number of rows\n");
	scanf("%d", &n);
	temp=n;
	for(i=0; i<=n; i++) { //row
		for(k=temp; k>=1; k--)
			printf(" ");
		temp--;
		for(j=1; j<=i; j++)
			printf("%d ", i);
		printf("\n");
	}
}
