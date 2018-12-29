#include <stdio.h>
void main()
{
	int *p;
	int n=10;
	*p=n;
	printf("%u", p);
	printf("\n%u", *p);
	printf("\n%u", &p);
	printf("\n%u", &*p);
	
}
