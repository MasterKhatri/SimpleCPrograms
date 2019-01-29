#include <stdio.h>
void main()
{
	int n1, n2, i;
	printf("This simple program prints alternate numbers in a given range\n");
	printf("Enter range - two numbers\n");
	scanf("%d %d", &n1, &n2);
	for(i=n1; i<=n2; i+=2)
		printf("%d\t", i);
}
