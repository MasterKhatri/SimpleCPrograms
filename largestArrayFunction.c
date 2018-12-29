#include <stdio.h>
void aMax(int a[], int n);
void main()
{
	int max, m, i;
	printf("Enter size of array\n");
	scanf("%d", &m);
	int x[m];
	printf("Enter elements of array\n");
	for(i = 0; i<m; i++)
		scanf("%d", &x[i]);
	aMax(x, m);
}
void aMax(int a[], int n){
	int i, largest;
	largest = a[0];
	for(i=0; i<n; i++){
		if(largest<a[i])
			largest = a[i];
	}
	printf("%d", largest);
}

