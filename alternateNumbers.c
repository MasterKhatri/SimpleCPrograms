#include <stdio.h>
void main()
{
	int n1, n2, i;
	printf("Enter two numbers\n");
	scanf("%d %d", &n1, &n2);
	for(i=n1; i<=n2; i+=2)
		printf("%d", i);
}
