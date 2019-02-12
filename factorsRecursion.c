#include <stdio.h>
void primefactor(int);
void main()
{
	int a;
	printf("This simple program prints the prime factors of a given number, using Recursion logic \n");
	printf("Enter a number \n");
	scanf("%d", &a);
	primefactor(a);
}

void primefactor(int n) {
	static int i = 1;
	if(i<=n) { 
		if(n%i==0) {
			printf("%d", i);
			//n/=i;
		}
		else
			i++;
		primefactor(n);
	}
	
	
}

