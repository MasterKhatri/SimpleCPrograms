#include <stdio.h>
#include <math.h>
void main() 
{
	int n, sum = 0;
	printf("This simple program checks if a number is armstrong number\n");
	printf("Enter number to be checked for armstrong\n");
	scanf("%d", &n);
	while(n > 0){
		sum = n % 10;
		sum += pow(n, 3);
		n /= 10;
	}
	printf("%d", sum);
}
