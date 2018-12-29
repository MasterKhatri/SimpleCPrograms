#include <stdio.h>
main()
{
	int n, i;
	printf("Enter a number\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		if(n%i==0) {
			printf("%d, ", i);
		}
	}
}
