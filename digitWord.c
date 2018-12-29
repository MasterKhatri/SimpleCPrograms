#include <stdio.h>
void main()
{
	int n, rev=0, rem;
	printf("Enter digits\n");
	scanf("%d", &n);
	while(n>0) {
		rem=n%10;
		rev=rev*rem;
		n/=10;
	}

	printf("%d", rev);
}
