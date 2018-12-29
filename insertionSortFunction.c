#include <stdio.h>
void insertionSort(int a[], int n);
void main()
{
	int i, m;
	printf("Enter size of array\n");
	scanf("%d", &m);
	int x[m];
	printf("Enter elements of array\n");
	for(i=0; i<m; i++)
		scanf("%d", &x[i]);
	insertionSort(x, m);
}
void insertionSort(int a[], int n){
	int i, j, temp;
	for(i=1; i<n; i++){
		temp = a[i];
		for(j = i-1; j>=0; j--) {
			if (a[j]>temp) {
				a[j+1] = a[j];
				a[j] = temp;
			}
			else 
				break;
		}
	}
	for(i=0; i<n; i++)
		printf("%d", a[i]);
}

