#include <stdio.h>
void primefactor(int );
main()
{
	int a;
	printf("Enter a number \n");
	scanf("%d", &a);
	primefactor(a);
}

void primefactor(int n) {
	static int i=1;
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

