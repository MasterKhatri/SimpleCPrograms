#include <stdio.h>
int sumArray(int a[], int n);
void main()
{
	int i, m, sum1; 
	printf("Enter size of array\n");
	scanf("%d", &m);
	int x[m];
	printf("Enter elements of array\n");
	for(i = 0; i<m; i++)
		scanf("%d", &x[i]);
	sum1 = sumArray(x, m);
	printf("%d", sum1);
}
int sumArray(int a[], int n){
	int i, sum2 = 0;
	for(i = 0; i<n; i++)
		sum2 += a[i];
	return sum2;
}


