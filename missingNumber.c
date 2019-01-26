#include <stdio.h>
void main()
{
	int n, sum = 0, total, miss, i;
	printf("This program finds missing number in a sorted array of 'n' elements\n");
	printf("Enter the size of array\n");
	scanf("%d", &n);
	int a[n];
	printf("Enter array elements\n");
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	total = (n+1)*(n+2)/2;
	for(i=0; i<n; i++){
		sum+= a[i];
	}
	miss = total - sum;
	printf("%d", miss);
}
