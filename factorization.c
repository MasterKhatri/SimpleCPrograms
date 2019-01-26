#include <stdio.h>
main()
{
	int n, i;
	printf("This simple program prints all the factors of the given number\n");
	printf("Enter a number\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		if(n%i == 0) {
			printf("%d, ", i);
		}
	}
}
