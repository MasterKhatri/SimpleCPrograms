#include <stdio.h>
void main()
{
	int n, i; //,temp;
	printf("This simple program prints alternate element in the given array\n");
	printf("Enter the size of array\n");
	scanf("%d", &n);
	int a[n];
	printf("Enter elements of array\n");
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	for(i=a[0]; i<=a[n-1]; i++)
		printf("%d", i++);
	/* Alternate logic:
	* temp = i*(i++);
	* printf("%d", temp);
	*/
}
