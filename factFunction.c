#include <stdio.h>
int fact(int a);
void main()
{
	int x, factorial=0;
	printf("Enter a number\n");
	scanf("%d", &x);
	factorial = fact(x);
	printf("%d", factorial);
}
int fact(int a) {
	int i, f=1;
	for(i=1; i<=a; i++)
		f*=i;
	return f;
}

