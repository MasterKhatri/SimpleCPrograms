#include <stdio.h>
int gcd(int n1, int n2);
void main()
{
	int a, b, store;
	printf("Enter two numbers to calculate GCD\n");
	scanf("%d%d", &a, &b);
	store = gcd(a, b);
	printf("%d", store);
}

int gcd(int n1, int n2) {
	if(n1>n2)
		return n1-=n2;
	else
		return n2-=n1;
}

