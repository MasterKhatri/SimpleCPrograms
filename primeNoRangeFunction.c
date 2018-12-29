#include <stdio.h>
void prime(int a, int b);
void main()
{
	int x1, x2;
	printf("Enter range of prime numbers\n");
	scanf("%d %d", &x1, &x2);
	prime(x1, x2);
}
void prime(int a, int b) {
	int i, j, flag, temp, count=0;
	a++;
	printf("Prime numbers are \n");
	temp=a;
	if(a%2==0)
		a++;
	for(i=a; i<=b; i+=2) {
		flag = 0;
		for(j=2; j<=i/2; j++) {
			if((i%j)==0) {
				flag = 1;
				break;
			}
		}
		if(flag==0) {
			printf("%d\n", i);
			count++;
		}
	}
	printf("Number of primes between %d and %d = %d\n", temp, b, count);
}


