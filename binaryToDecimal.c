#include <stdio.h>
#include <math.h>
int main()
{

	long long n; 
	long long sum=0, i=0;
	printf("Enter a binary number\n");
	scanf("%d", &n);
	while(n){
		sum+= pow(2,i)*(n%10);
		n/= 10;
		i++;
	}
			printf("%d", sum);
}


